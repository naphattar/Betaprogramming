from itertools import permutations
n = int(input())
m = int(input())
ham = [int(x) for x in input().split()]
all = [i for i in range(1,n+1)]

for comb in permutations([i+1 for i in range(n)]):
    if comb[0] in ham:
        pass
    else:
        comb = list(comb)
        combi = [str(x) for x in comb]
        print(" ".join(combi))
    