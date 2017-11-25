def cube(x):
    return x*x*x

def cube_product(a,b):
    product = 1
    for i in range (b-a+1):
        product = product * cube(a+i)
    return product    

print cube_product(1,5)

        
