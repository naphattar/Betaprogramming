n = int(input())
tower = []
for i in range(n):
    x,y = [int(a) for a in input().split()]
    tower.append((x,y))
result = 0
if n >=3:
    for i in range(n-2):
        for j in range(i+1,n-1):
            for k in range(j+1,n):
                area = 0.5*abs(tower[i][0]*tower[j][1]+tower[j][0]*tower[k][1]+tower[k][0]*tower[i][1]-tower[i][1]*tower[j][0]-tower[j][1]*tower[k][0]-tower[k][1]*tower[i][0])
                result = max(result,area)
print("{:.3f}".format(result))
