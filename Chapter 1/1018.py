x,y = 0,0
tid = "E"
RT = {"N":"E","E":"S","S":"W","W":"N"}
LT = {"N":"W","W":"S","S":"E","E":"N"}
BW = {"N":"S","W":"E","S":"N","E":"W"}
def move(tid,n,x,y):
    if tid == "N":
        y += n
    elif tid == "E":
        x += n
    elif tid == "S":
        y -= n
    elif tid == "W":
        x -= n
    return x,y

dead = False
n = int(input())
for i in range(n):
    order = input().split()
    if order[0] =="FD":
        pass
    
    elif order[0] == "RT":
        tid = RT[tid]
    
    elif order[0] == "LT":
        tid = LT[tid]
    
    elif order[0] == "BW":
        tid = BW[tid]
    x,y = move(tid,int(order[1]),x,y)
    if abs(x) >= 50000 or abs(y) >= 50000:
        dead = True
        
if dead:
    print("DEAD")
else:
    print(x,y)
    print(tid)