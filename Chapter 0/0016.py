n = int(input())
word = input()
a,b,c = 0,0,0
x,y,z = "ABC","BABC","CCAABB"
for i in range(len(word)):
    if word[i] == x[i%3]:
        a += 1
    if word[i] == y[i%4]:
        b += 1
    if word[i] == z[i%6]:
        c += 1
maxi = max(a,b,c)
print(maxi)
if maxi == a:
    print("Adrian")
if maxi == b:
    print("Bruno")
if maxi == c:
    print("Goran")

