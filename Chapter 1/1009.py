a,b = [int(x) for x in input().split()]
data1,data2 = [],[]
for i in range(3):
    line = input()
    if i == 0:
        for j in range(a):
            data1.append([])
            data1[j].append(line[4*j:4*j+3])
    else:
        for j in range(a):
            data1[j].append(line[4*j:4*j+3])
for i in range(3):
    line = input()
    if i == 0:
        for j in range(b):
            data2.append([])
            data2[j].append(line[4*j:4*j+3])
    else:
        for j in range(b):
            data2[j].append(line[4*j:4*j+3])
m,n = "",""
for i in range(a):
    if data1[i][0] == "   ":
        if data1[i][1] == "  |":
            m += "1"
        elif data1[i][1] == "|_|":
            m += "4"
    else:
        if data1[i][1] == " _|":
            if data1[i][2] == "|_ ":
                m+= "2"
            else:
                m+= "3"
        elif data1[i][1] == "|_ ":
            if data1[i][2] == " _|":
                m+= "5"
            else:
                m+= "6"
        elif data1[i][1] == "|_|":
            if data1[i][2] == " _|":
                m+= "9"
            else:
                m+= "8"
        elif data1[i][1] == "  |":
            m += "7"
        else:
            m+= "0"
for i in range(b):
    if data2[i][0] == "   ":
        if data2[i][1] == "  |":
            n += "1"
        elif data2[i][1] == "|_|":
            n += "4"
    else:
        if data2[i][1] == " _|":
            if data2[i][2] == "|_ ":
                n+= "2"
            else:
                n+= "3"
        elif data2[i][1] == "|_ ":
            if data2[i][2] == " _|":
                n+= "5"
            else:
                n+= "6"
        elif data2[i][1] == "|_|":
            if data2[i][2] == " _|":
                n+= "9"
            else:
                n+= "8"
        elif data2[i][1] == "  |":
            n += "7"
        else:
            n += "0"
print(int(m)+int(n))
        


        
            





