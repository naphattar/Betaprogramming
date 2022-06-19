word = input()
small = "abcdefghijklmnopqrstuvwxyz"
big = small.upper()
sm,bi = False,False
for i in word:
    if i in small:
        sm = True
    elif i in big:
        bi = True
if sm and bi:
    print("Mix")
elif sm:
    print("All Small Letter")
elif bi:
    print("All Capital Letter")
        