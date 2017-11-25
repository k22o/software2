def compare(a,b,c):
    if(b<c):
        temp = b
        b = c
        c = temp
    if(a<b):
        temp = a
        a = b
        b = temp
    if(b<c):
        temp = b
        b = c
        c = temp

    return a+b;

print (compare(2,3,4))
        
