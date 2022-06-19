n = int(input())

def fac(n):
    if n == 0:
        return 1
    else:
        return n*fac(n-1)

def binom(n,k):
    n,k = int(n),int(k)
    if n>= k:
        return int(fac(n)/(fac(n-k)*fac(k)))
    else:
        return 0 

if n%2 == 0:
    result = binom(n,n/2)
else:
    result = binom(n,n//2)+binom(n,n//2+1)
print(int(result))