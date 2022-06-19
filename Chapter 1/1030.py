k = int(input())
rice = []

for i in range(k):
    p,q = [float(x) for x in input().split()]
    rice.append([p/q,q]) # เก็บ[ราคาต่อ กก , จำนวน กก ที่มี]
rice.sort()
m = int(input())
i = 0
price = 0
j = 0
while i < m:
    b = int(input())
    if b >= rice[j][1]:
        price += rice[j][1]*rice[j][0]
        j += 1
        i += 1
    else:
        rice[j][1] -= b
        price += rice[j][0]*b
        i += 1      
    print("{:.3f}".format(price))
        




