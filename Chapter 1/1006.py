n = int(input())
import numpy as np
def change(order):
    result = np.array([[1,6],[2,5],[3,4]])
    for ord in order:
        origin = result.copy()
        if ord == "F":
            result[0,:] = np.array([result[1,1],result[1,0]])
            result[1,:] = origin[0,:]
        elif ord == "B":
            result[1,:] = np.array([result[0,1],result[0,0]])
            result[0,:] = origin[1,:]
        elif ord == "L":
            result[0,:] = np.array([result[2,1],result[2,0]])
            result[2,:] = origin[0,:]
        elif ord == "R":
            result[2,:] = np.array([result[0,1],result[0,0]])
            result[0,:] = origin[2,:]
        elif ord == "D":
            result[2,:] = np.array([result[1,1],result[1,0]])
            result[1,:] = origin[2,:]
        elif ord == "C":
            result[1,:] = np.array([result[2,1],result[2,0]])
            result[2,:] = origin[1,:]
    return str(result[1,0])
out = ""
for i in range(n):
    ord = input()    
    out += change(ord)+" "
print(out[:-1])
       
        
        



