def move(a,b,c): #a นางพญา b ทหาร c ผึ้งงาน
    old_b = b
    old_c = c
    c = c+1
    c = c+old_b
    b = old_c
    return a,b,c
line = [int(x) for x in input().split()][:-1]
for i in range(len(line)):
    a,b,c = 1,0,1
    for j in range(line[i]):
        a,b,c = move(a,b,c)
    print(str(c)+" "+str(a+b+c))
    



    



