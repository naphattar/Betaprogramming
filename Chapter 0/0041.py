n = int(input())
import math
if n%2 == 0:
    print("{:.6f}".format(n))
elif n == 1:
    print("{:.6f}".format(2))
elif n == 3:
    result = (3**(0.5))+2
    print("{:.6f}".format(result))
else:
    pi = math.pi
    result = n-3+2*(3**(0.5))
    print("{:.6f}".format(result))
