a,b,c = [int(x) for x in input().split()]
def long(x):
    count = 0
    while x !=1:
        x = x//2
        count +=1
    return count
print(long(a)+long(b)+long(c))