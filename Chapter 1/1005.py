n = int(input())
seq = [int(x) for x in input().split()]
result = []
present = []

for i in seq:
    if i + sum(present) >= i:
        present.append(i)
    else:
        present = [i]
    if sum(present) > sum(result):
        result = present.copy()    
if sum(result) > 0:
    print(" ".join([str(i) for i in result]))
    print(sum(result))
else:
    print("Empty sequence")

