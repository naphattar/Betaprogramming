n = int(input())
startzudoku = []
check = set([i for i in range(1,10)])
for i in range(9):
    startzudoku.append([int(x) for x in input().split()])

def checkstart(x):   #ไว้ตรวจตารางเริ่มต้นเทียบตาราง x
    result = 1
    for i in range(9):
        for j in range(9):
            if startzudoku[i][j] != 0:
                result*= (startzudoku[i][j] == x[i][j])
                if result == 0:
                    return 0
    return result

def checkzudoko(x): # ไว้ตรวจ zudokuว่า ตรงเลขซ้ำไหม เเละเช็คผลบวก
    result = 1
    for i in range(9):
        result *= (set(x[i]) == check)*(sum(x[i]) == 45)
    for i in range(9):
        row = [x[j][i] for j in range(9)]
        result *=  (set(row) == check)*(sum(row) == 45)
    return result
def check3x3(x):
    result = 1
    for i in range(9):
        for j in range(3):
            result *= (x[i][3*j]+x[i][3*j+1]+x[i][3*j+2] == 15)
    for i in range(9):
        for j in range(3):
            result += (x[3*j][i]+x[3*j+1][i]+x[3*j+2][i] == 15)
    return result

for i in range(n):
    zudoku = []
    for j in range(9):
        zudoku.append([int(x) for x in input().split()])
    if checkstart(zudoku):
        if checkzudoko(zudoku):
            if check3x3(zudoku):
                print(i+1)
print("END")




    




    

