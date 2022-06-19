import math
n,m = [int(x) for x in input().split()]
l,k = [int(x) for x in input().split()]
c = int(input())
gridprice = 0
for i in range(n):
    grid = [int(x) for x in input().split()]
    gridprice += sum(grid)
gasprice = l*k*c
price = gasprice+gridprice
print(math.ceil(price/c))