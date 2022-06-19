num = [int(x) for x in input().split()]
num.sort()
dic = {"A":0,"B":1,"C":2}
ord = input()
result = ""
for i in ord:
    result = result+str(num[dic[i]])+" "
print(result[:-1])