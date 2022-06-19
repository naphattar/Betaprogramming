teams = []
scorelist = []
match = []
for i in range(4):
    teams.append(input())
for i in range(4):
    match.append([int(x) for x in input().split()])
for i in range(4):
    score = 0
    diff,ying = 0,0
    for j in range(4):
        if j != i:
            if match[i][j] > match[j][i]:
                score += 3
            elif match[i][j] == match[j][i]:
                score += 1
            diff += (match[i][j] - match[j][i])
            ying += match[i][j] 
            
    scorelist.append([score,diff,ying,teams[i]])
scorelist.sort()


for i in range(3,-1,-1):
    print(scorelist[i][3]+" "+str(scorelist[i][0]))
