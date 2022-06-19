data = []
n = int(input())
for i in range(n):
    order = input().split()
    if order[0] == "Q":
        if len(data) == 0:
            print(-1)
        else:
            print(data[-1])
            data = data[:-1]
    else:
        data.append(int(order[1]))
        data.sort()

