n = int(input())
build = {}
for i in range(256):
    build[i] = 0
maxi = 0
for i in range(n):
    l,h,r = [int(x) for x in input().split()]
    maxi = max(maxi,r)
    for j in range(l,r):
        build[j] = max(build[j],h)    
#sky = "1 "+str(build[1])+" "
sky = ""
ch,st = 0,0
while st <= maxi:
    while build[ch] == build[st] and st <= maxi:
        st += 1
    ch = st
    sky += str(ch)+" "+str(build[ch])+" "
    st = ch+1
print(sky[:-1])



