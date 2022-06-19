n = input()
m = len(n)
a,b = 0,0
for i in range(m):
    a += int(n[i])
    b += int(n[i])*((-1)**(i+1))
print(a%3,b%11)

