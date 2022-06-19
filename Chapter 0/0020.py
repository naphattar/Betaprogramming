score = []

for i in range(5):
    score.append(sum([int(x) for x in input().split()]))

maxi = max(score)
print(score.index(maxi)+1,maxi)


