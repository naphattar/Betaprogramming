def palin(n):
    check = True
    n  = str(n)
    m = len(n)
    for i in range(m//2):
        if n[i] != n[m-1-i]:
            check = False
            break
    return check
def prime(n):
    if n > 3:
        check = True
        m = int(n**(0.5))
        for i in range(2,m+1):
            if n%i == 0 :
                check = False
                break
    elif n == 1:
        check = False
    else:
        check = True
    return check

n = int(input())
while True:
    if palin(n):
        if prime(n):
            break
        else:
            n = n+1
    else:
        n = n+1

print(n)