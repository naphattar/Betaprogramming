from itertools import combinations
n = int(input())
taste = {}
for i in range(n):
    s,b = [int(x) for x in input().split()]
    taste[i] = [s,b]

def deli(recipe):
    alls,allb = 1,0
    for i in recipe:
        alls *= taste[i][0]
        allb += taste[i][1]
    return abs(alls-allb)
m = [i for i in range(n)]
mini = deli([i for i in range(n)])
for k in range(1,n+1):
    for comb in combinations(m,k):
        mini = min(deli(comb),mini)

print(mini)