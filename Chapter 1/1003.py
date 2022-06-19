n = int(input())
if n < 6:
    print("no")
else:

    result = []
    for i in range(n//20+1):
        m = n-20*i
        for j in range(m//9+1):
            l = m -9*j
            for k in range(l//6+1):
                result.append(20*i+9*j+6*k)
    result = list(set(result))
    result.sort()
    for i in result:
        if 0< i <= n:
            print(i)

