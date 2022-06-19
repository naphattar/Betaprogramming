n = int(input())
maxii = 0
maxlist = []
data = [int(x) for x in input().split()]
datacount = {}
for i in range(n):
    if data[i] in datacount.keys():
        datacount[data[i]] += 1
    else:
        datacount[data[i]] = 1
    if datacount[data[i]] >= maxii:
        maxii = datacount[data[i]]
for i in range(n):
    if datacount[data[i]] == maxii:
        maxlist.append(data[i])
maxlist = list(set(maxlist))
maxlist.sort()
print(*maxlist,sep = " ")
