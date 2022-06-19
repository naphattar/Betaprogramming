from itertools import combinations
n,k = [int(x) for x in input().split()]
work = {}  #work เก็บงานของอุปกรณ์
price = {}  #price เก็บราคาของอุปกรณ์
for i in range(n):
    data = [int(x) for x in input().split()]
    work[i] =set([j-1 for j in range(1,k+1) if data[j] == 1])
    price[i] = data[0]
check = set([i for i in range(k)]) # check คือเซตของงานทั้งหมด (0,1,2,..,n-1)
all = [i for i in range(n)]
result = []
for i in range(1,n+1):
    comb = combinations(all,i)
    for j in comb:
        theirwork = set()
        theirprice = 0
        for w in j:
            theirwork = theirwork.union(work[w])
            theirprice += price[w]
        if theirwork == check:
            result.append(theirprice)

result.sort()
print(result[0])


        