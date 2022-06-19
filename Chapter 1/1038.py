n = int(input())

prob = []
for i in range(n):
    prob.append([float(x)/100 for x in input().split()])

def jame(n,m): # n คือภารกิจที่ n เเละ m คือลำดับที่ทำภารกิจที่ n
    if n == 1:
        return prob[0][m-1]
    elif m == 1:
        return prob[n-1][0]
    else:
        # เลือกภารกิจที่ n เป็นลำดับ m ได้ prob[n-1][m-1] * jame(n-1,m-1)
        # ไม่เลือก ทำได้ max(jame(n-1,m),jame(n,m-1))
        return max(prob[n-1][m-1] * jame(n-1,m-1),jame(n-1,m),jame(n,m-1))
print(jame(n,n))