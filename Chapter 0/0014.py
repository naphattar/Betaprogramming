a,b = [int(x) for x in input().split()]
while a!= 0:
    #a,b = a,b%a
    #a,b = b,a
    a,b = b%a,a
print(b)
