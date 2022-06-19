def solve(n):
    A = 2**(0.5)-1
    B = 3+2*(2**(0.5))
    a = 1+2**(0.5)
    b = 1-2**(0.5)
    sum1 = (0.5)*A*(B*(a**n)-b**n)
    if n>4:
        sum1 = int(sum1)+1
    else:
        sum1 = int(sum1)
    return sum1%987654321
t = int(input())
for i in range(t):
    n = int(input())
    print(solve(n))