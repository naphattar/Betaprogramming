x,y = [int(x) for x in input().split()]
if x > y:
    print(2)
elif y%x == 0:
    print(y//x)
else:
    print(y//x+1)