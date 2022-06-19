n,k = [int(x) for x in input().split()]
kaa = []
num = [i for i in range(2,n+1)]
while len(kaa) < k:
    start = num[0]
    for i in num:
        if i%start == 0:
            num.remove(i)
            kaa.append(i)
print(kaa[k-1])