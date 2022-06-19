order = input().split()
x,y = 0,0

for i in range(len(order)-1):
    j = 0
    while not(order[i][j] in "NESW"):
        j = j+1
    tis = order[i][j:]
    d = float(order[i][:j])
    e = d/(2**(0.5))
    if tis == "N":
        y += d
    elif tis == "E":
        x += d
    elif tis == "S":
        y -= d
    elif tis == "W":
        x -= d
    elif tis == "NE":
        x += e
        y += e
    elif tis == "SE":
        x += e
        y -= e
    elif tis == "SW":
        x -= e
        y -= e
    elif tis == "NW":
        x -= e
        y += e
        
print("{:.3f}".format(x),"{:.3f}".format(y))
print("{:.3f}".format((x**2+y**2)**(0.5)))


    