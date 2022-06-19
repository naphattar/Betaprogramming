def lcm(a,b):
    s = a*b
    while a != 0:
        a,b = a,b%a
        a,b = b,a
    return s//b
n = int(input())
a = int(input())
for i in range(n-1):
    a = lcm(a,int(input()))
print(a)
