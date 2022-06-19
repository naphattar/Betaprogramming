import numpy as np
tar = True
n = int(input())
table = np.zeros((n,n),int)
tayang1 = 0
tayang2 = 0
for i in range(n):
    table[i,:] += np.array(([int(x) for x in input().split()]))
    tayang1 += table[i,n-1-i]
    tayang2 += table[i,i]
    if np.sum(table[i,:]) != n*(n**2+1)//2:
        tar = False
        break
if tayang1 == tayang2 == n*(n**2+1)//2:
    pass
else:
    tar = False
if tar:
    sumx = np.sum(table,axis = 0)
    sumy = np.sum(table,axis = 1)
    check = n*(n**2+1)//2
    sumx = sumx[sumx == check]
    sumy = sumy[sumy == check]
    sumx = list(sumx)
    sumy = list(sumy)
    if len(sumx) == len(sumy) == n :
        print("Yes")
    else:
        print("No")
else:
    print("No")