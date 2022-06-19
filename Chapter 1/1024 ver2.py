n = int(input())
data = [int(x) for x in input().split()]
d = sum(data)
s,t,good = 1,2,d
a = 0
for i in range(0,n-1):
    a += data[i]
    b = 0
    for j in range(i+1,n):
        b += data[j]
        c = d-b-a
        diff = max(a,b,c)-min(a,b,c)
        if diff <  good:
            s,t = i,j
            good =  diff   
print(s+2,t+2)


    