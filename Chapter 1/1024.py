n = int(input())
data = [int(x) for x in input().split()]
s,t,good = 0,0,sum(data)
def diff (s,t):
    a,b,c = sum(data[:s]),sum(data[s:t]),sum(data[t:])
    return max(a,b,c) - min(a,b,c)
for i in range(1,n-1):
    for j in range(i,n):
        if diff(i,j) <  good:
            s,t = i,j
            good = diff(i,j)      
print(s+1,t+1)


