n = int(input())
num = [int(x) for x in input().split()]
num.sort()
i = 0
while num[i] == 0:
    i = i+1
result = str(num[i])
num.remove(num[i])
for i in num:
    result += str(i)
print(int(result))
