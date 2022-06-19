word = input()
ball = -1
for i in word:
    if i =="A" and (ball != 1):
        ball = ((ball+1)%2)*(-1)
    if i == "B" and (ball != -1):
        ball = (ball+1)%2
    if i == "C" :
        ball = (-1)*ball
print(int(ball+2))
        