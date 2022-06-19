from itertools import combinations
n,k = [int(x) for x in input().split()]
work = {}  #work เก็บงานของอุปกรณ์
price = {}  #price เก็บราคาของอุปกรณ์
sumprice = 0
for i in range(n):
    data = [int(x) for x in input().split()]
    work[i] =set([j-1 for j in range(1,k+1) if data[j] == 1])
    price[i] = data[0]
    sumprice += data[0]
check = set([i for i in range(k)]) # check คือเซตของงานทั้งหมด (0,1,2,..,n-1)
spsp = [set()]
for i in range(1,k+1):
    comb = combinations(list(check),i)
    for j in comb:
        spsp.append(set(j))
tar = [[0]*(2**k)]*n

#Note ปัญหาคือ recursion เยอะไป#
#------------------------------#
def equip(n,ch):
    if ch == set():
        tar[n][spsp.index(ch)] = 0
        return 0
    elif n == 0:
        tar[n][spsp.index(ch)] = sumprice+1
        return sumprice+1

    elif tar[n-1][spsp.index(ch)] != 0:
        return tar[n-1][spsp.index(ch)]
    else:
        tar[n-1][spsp.index(ch)] = min(equip(n-1,ch-work[n-1])+price[n-1] , equip(n-1,ch))
        return tar[n-1][spsp.index(ch)]

print(equip(n,check))







    





