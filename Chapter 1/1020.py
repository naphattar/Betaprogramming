def prub(x):
    newx = ""
    for i in range(len(x)):
        if x[i] in "ABCDEFGHIJKLNMNOPQRSTUVWXYZ":
            newx += x[i].lower()
        else:
            newx += x[i]
    return newx
def palin(x):
    x = prub(x)
    for i in range(len(x)):
        if x[i] == x[len(x)-1-i]:
            pass
        else:
            return False
    return True
        
def double(x):
    n = len(x)
    x = prub(x)
    if n%2 == 0:
        first = x[:n//2]
        second = x[n//2:]
    else:
        first = x[:n//2]
        second = x[n//2+1:]

    if palin(first) and palin(second):
        return True
    return False

word = input()
if double(word):
    print("Double Palindrome")
elif palin(word):
    print("Palindrome")
else:
    print("No")
