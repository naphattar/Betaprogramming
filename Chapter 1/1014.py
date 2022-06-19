w,h,n = [int(x) for x in input().split()]
win = {}
for i in range(w):
    win[i] = 0
for i in range(n):
    x,a = [int(x) for x in input().split()]
    for j in range(x,x+a):
        if j< w:
            win[j] += 1
a,b = 0,0
for i in range(w):
    if win[i] == 1:
        a +=1
    elif win[i] == 0:
        b +=1
print(b*h,a*h)

