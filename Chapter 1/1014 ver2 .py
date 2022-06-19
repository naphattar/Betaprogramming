W,H,n = [int(e) for e in input().split()]
ans = [0]*W
for i in range(n):
    x = [int(e) for e in input().split()]
    x[1] = x[0] + x[1]
    if x[1] >= W:
        x[1] = W
    for j in range(x[0],x[1]):
        if ans[j] == 0:
            ans[j] = 1
        elif ans[j] == 1:
            ans[j] = 2
        else:
            continue
blank_ans = 0
half_ans = 0
for k in ans:
    if k == 0:
        blank_ans+= 1
    if k == 1:
        half_ans += 1
print(blank_ans*H,half_ans*H)
print(ans)