n,m,k = [int(x) for x in input().split()]
area = []
for i in range(k):
    x,y,r = [int(a) for a in input().split()]
    area.append([[x-r,x+r],[y-r,y+r]])
dx,dy = 0,0
for x in range(n):
    cx = 0
    for i in range(k):
        if area[i][0][0] <= x <= area[i][0][1]:
            cx +=1
    dx = max(cx,dx)
for y in range(m):
    cy = 0
    for i in range(k):
        if area[i][1][0] <= y <= area[i][1][1]:
            cy +=1
    dy = max(cy,dy)
    
print(max(dx,dy))

       

    