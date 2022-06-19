word = input()
f1,f2,f3,f4,f5 = [""]*5
for i in range(len(word)):
    if (i+1)%3 == 1 and i != 0:
        f1+= "..#."
        f2+= ".#.#"
        f3+= "*."+str(word[i])+"."
        f4+= ".#.#"
        f5+= "..#."
    elif (i+1)%3 != 0:
        f1+= "..#."
        f2+= ".#.#"
        f3+= "#."+str(word[i])+"."
        f4+= ".#.#"
        f5+= "..#."
    else:
        f1+= "..*."
        f2+= ".*.*"
        f3+= "*."+str(word[i])+"."
        f4+= ".*.*"
        f5+= "..*."

if (len(word))%3 == 0:
    f1+= "."
    f2+= "."
    f3+= "*"
    f4+= "."
    f5+= "."
else:
    f1+= "."
    f2+= "."
    f3+= "#"
    f4+= "."
    f5+= "."
print(f1)
print(f2)
print(f3)
print(f4)
print(f5)