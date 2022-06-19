n,k = [int(x) for x in input().split()]
work = {} #work เก็บงานของอุปกรณ์
price = {} #price เก็บราคาของอุปกรณ์
sumprice = 0
for i in range(n):
    data = [int(x) for x in input().split()]
    work[i] =set([j-1 for j in range(1,k+1) if data[j] == 1])
    price[i] = data[0]
    sumprice += data[0]
check = set([i for i in range(k)]) # check คือเซตของงานทั้งหมด (0,1,2,..,n-1)

def indexing(ch):
    result = 0
    for i in ch:
        result += 2**i
    return result

tar = [[0]*(2**k)]*n

def equip(n,ch):
    if ch == set():
        return 0
    elif n == 0:
        return sumprice+1
    elif tar[n-1][indexing(ch)] != 0:
        return tar[n-1][indexing(ch)]
    else:
        tar[n-1][indexing(ch)] = min(equip(n-1,ch-work[n-1])+price[n-1] , equip(n-1,ch))
        return tar[n-1][indexing(ch)]
    
print(equip(n,check))