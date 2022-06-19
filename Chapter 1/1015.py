n = int(input())
data = []
for i in range(n):
    data.append(input().split())

for i in range(n):
    for j in range(n):
        if data[i][j] != -1:
            if 0 < i < n-1 and 0 < j < n-1:
                pass 
            # To be continue ...
        
