a = input()
b = input()
work = []
maxi = 0
if len(a) > len(b):
    a,b = b,a
m,n = len(a),len(b)
for i in range(m):
    for j in range(m-i+1):
        if a[i:i+j] in b:
            work.append(a[i:i+j])
            maxi = max(maxi,j)
for w in work:
    if len(w) == maxi:
        print(w)
    