nc,ns = [int(x) for x in input().split()]
stdclass = {}
que = []
classque = []
current = 0
for i in range(ns):
    c,s = [x for x in input().split()]
    stdclass[s] = c

order = input().split()
while order[0] != "X":
    if order[0] == "E":
        id = order[1]
        if stdclass[id] not in classque:
            classque.append(stdclass[id])
            que.append([])
        que[classque.index(stdclass[id])]+= [id]
    elif order[0] == "D":
        if len(que) > 1:
            if len(que[0])>1:
                result = que[0][0]
                que[0] = que[0][1:]
            else:
                result = que[0][0]
                que = que[1:]
                classque = classque[1:]
        elif len(que) == 1:
            if len(que[0])>1:
                result = que[0][0]
                que[0] = que[0][1:]
            else:
                result = que[0][0]
                que = []
                classque = []
        else:
            result = "empty"
        print(result)
    order = input().split()
print(0)
                


