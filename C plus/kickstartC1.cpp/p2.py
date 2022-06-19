def partition(N, PartitionSum):
    assert(N >= 0 and PartitionSum >= 0)
    if (PartitionSum == 0 or N == 0):
      return []
    if(N > PartitionSum):
      return partition(N-1, PartitionSum)
    else:
      return [N] + partition(N-1, PartitionSum-N)
t = int(input())
for a in range(1,t+1):
    n,x,y = [int(b) for b in input().split()]
    sum1 = n*(n+1)
    sum1 = sum1//2
    if(sum1%(x+y) == 0):
        suma = (x)*(sum1)//(x+y)
        seq = partition(n,suma)
        result = ""
        for num in seq:
            result += str(num)+" "
        print("Case #"+str(a)+": POSSIBLE")
        print(len(seq))
        print(result)
    else:
        print("Case #"+str(a)+": IMPOSSIBLE")
