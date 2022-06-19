dlist = []
for i in range(9):
    dlist.append(int(input()))
for i in range(9):
    for j in range(i+1,9):
        d = dlist.copy()
        d.remove(dlist[i])
        d.remove(dlist[j])
        if sum(d) == 100:
            for k in d:
                print(k)
            break