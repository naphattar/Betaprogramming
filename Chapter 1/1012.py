n = int(input())
order = [0,0,0,0,0] # 1,3/4,1/2,1/4,1/8
for i in range(n):
    a,b,c,d,e = [int(x) for x in input().split()]
    order[0] += a
    order[1] += b
    order[2] += c
    order[3] += d
    order[4] += e
s = sum(order)
for i in range(s):
    if i >= order[0] + order[1]*3/4 + order[2]/2 + order[3]/4 + order[4]/8:
        print(i)
        break
