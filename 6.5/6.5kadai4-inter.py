import math
def f(x):
    return math.sin(x)

def integration_small(a,b,n,i):
    width = (a-b)/n
    x1 = a + i * width 
    y1 = f(x1)
    x2 = x1 + width
    y2 = f(x2)
    return (y1+y2)*width/2.0

def integration(a,b,n):
    sum = 0
    for i in range (n):
        sum = sum + integration_small(a,b,n,i)
    print sum

integration(0.0, math.pi/2, 1000)            