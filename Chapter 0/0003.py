import numpy as np
m,n = [int(x) for x in input().split()]
a = np.zeros((m,n),int)
b = np.zeros((m,n),int)
for i in range(m):
    a[i,] += np.array([int(x) for x in input().split()])
for i in range(m):
    b[i,] += np.array([int(x) for x in input().split()])
s = a+b

for i in range(m):
    slist = s[i,].tolist()
    stlist = [str(x) for x in slist]
    print(" ".join(slist))

