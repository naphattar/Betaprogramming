a = int(input())
b = int(input())
c = int(input())
s = a+b+c
if s >= 80:
    print("A")
elif s >= 75:
    print("B+")
elif s >= 70:
    print("B")
elif s >= 65:
    print("C+")
elif s>= 60:
    print("C")
elif s >= 55:
    print("D+")
elif s>= 50:
    print("D")
else:
    print("F")