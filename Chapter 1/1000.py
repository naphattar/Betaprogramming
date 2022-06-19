l = int(input())
n = int(input())
check = False
count = 0
first = input()
if n ==1:
    print(first)
else:
    while count < n-1:
        tar = 0
        word = input()
        for i in range(l):
            if first[i] == word[i]:
                pass
            else:
                tar += 1
        count +=1
        if tar > 2 and not check:
            result = first
            check = True
        first = word
    if check:   
        print(result)
    else:
        print(word)

