n = int(input())
if n%2 ==1:
    m = n//2
    print("-"*m+"*"+"-"*m)
    for i in range(m-1,-1,-1):
        print("-"*i+"*"+"-"*(n-2*i-2)+"*"+"-"*i)
    for i in range(1,m):
        print("-"*i+"*"+"-"*(n-2*i-2)+"*"+"-"*i)
    print("-"*m+"*"+"-"*m)
else:
    n = n-1
    m = n//2
    print("-"*m+"*"+"-"*m)
    for i in range(m-1,-1,-1):
        print("-"*i+"*"+"-"*(n-2*i-2)+"*"+"-"*i)
    for i in range(m):
        print("-"*i+"*"+"-"*(n-2*i-2)+"*"+"-"*i)
    print("-"*m+"*"+"-"*m)
    
    
    


