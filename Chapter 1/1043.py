import numpy as np
def main(x):
    result = 1
    k = 2
    while x> 1.99:
        if int(x**(1/k)) == 1:
            break
        elif int(x**(1/k)) == x**(1/k):
            result *= k
            x = x**(1/k)
            k = 2
        else:
            k+=1
    if result<=1:
        return "NO"
    return result

print(1000**(1/3))
print(int(1000**(1/3)))
n = int(input())
for i in range(n):
    print(main(int(input())))