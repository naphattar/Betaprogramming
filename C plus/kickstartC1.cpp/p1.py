def check1(test):
    for i in test:
        if i in "ABCDEFGHIJKLMNOPQRSTUVWXYZ":
            return True
    return False
def check2(test):
    for i in test:
        if i in "ABCDEFGHIJKLMNOPQRSTUVWXYZ".lower():
            return True
    return False
def check3(test):
    for i in test:
        if i in "1234567890":
            return True
    return False
def check4(test):
    for i in test:
        if i in "#@*&":
            return True
    return False

t = int(input())
for a in range(t):
    n = int(input())
    test = input()
    if not check1(test):
        test = test+"A"
    if not check2(test):
        test = test+"a"
    if not check3(test):
        test = test+"0"
    if not check4(test):
        test = test+"#"
    while(len(test)<7):
        test = test+"A"
    print("Case #"+str(a+1)+": "+test)
    


