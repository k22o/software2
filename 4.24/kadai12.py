def rotate(x):
    p = x[0]
    x.pop(0)
    x.append(p)
    return x
    
print rotate([1,2,3,4])
