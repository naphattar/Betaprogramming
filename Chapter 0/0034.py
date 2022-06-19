A,B,C = [int(x) for x in input().split()]
found = False
if C == 0 and B >=0:
    b = 0
    for a in range(1,A+1):
        if A%a == 0 and not found:
            c = A//a
            for d in range(B+1):
                if a*d == B:
                    print(a,b,c,d)
                    found = True
                    break
elif C == 0 and B < 0:
    d = 0
    for a in range(1,A+1):
        if A%a == 0 and not found:
            c = A//a
            for b in range(B,0):
                if a*b == B:
                    print(a,b,c,d)
                    found = True
                    break

else:
    for a in range(1,A+1):
        if A%a == 0 and not found:
            for b in range(-1*abs(C),abs(C)+1):
                if b!= 0:
                    if C%b == 0 and not found :
                        c,d = A//a,C//b
                        if a*d+b*c == B:
                            print(a,b,c,d)
                            found = True
                            break
                    
if not found:
    print("No Solution")

