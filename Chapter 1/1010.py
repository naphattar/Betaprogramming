m,n = [int(x) for x in input().split()]
table = []
for i in range(m):
    table.append([x.lower() for x in input()])

diff = [(1,1),(1,-1),(1,0),(-1,1),(-1,-1),(-1,0),(0,1),(0,-1)]

def find(word):
    result = []
    for i in range(m):
        for j in range(n):
            for l in range(8):
                check = ""
                for p in range(len(word)):
                    if 0<=i+p*diff[l][0]<m and 0<=j+p*diff[l][1]<n:
                        check += table[i+p*diff[l][0]][j+p*diff[l][1]]
                if check == word:
                    return str(i)+" "+str(j)



k = int(input())
for i in range(k):
    word = input().lower()
    print(find(word))



    
        
        
            
        
        
        
