n = int(input())
i = 1
mini = int(input())
maxi = mini
while i < n:
    x = int(input())
    mini = min(mini,x)
    maxi = max(maxi,x)
    i = i+1
print(mini)
print(maxi)
