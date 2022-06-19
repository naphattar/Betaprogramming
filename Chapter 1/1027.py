player = "ABCDEFG"
score = [0,0,0,0,0,0,0]

def remove(score,player):
    result = 0
    count = 0
    for i in range(1,len(score)):
        if score[i] < score[result]:
            result = i
            count = 0
        elif score[i] == score[result]:
            result = i
            count = count+1
    if count == 0 and result < len(score)-1:
        score = score[0:result]+score[result+1:]
        player = player[0:result]+player[result+1:]
    elif count ==0:
        score = score[:len(score)-1]
        player = player[:len(player)-1]
    return score,player
data = input()
while data != "!":
    for j in data:
        score[player.index(j)] += 1
    score,player = remove(score,player)
    data = input()
scoretoplay = {}
for i in range(len(score)):
    scoretoplay[score[i]] = player[i]
score.sort()
print(len(score))
for i in range(len(score)-1,-1,-1):
    print(scoretoplay[score[i]],score[i])

