import math


def sign(a):
    if a>0:
        return 1
    else:
        return -1

def main(a,b,c):
    x1 = (- b - math.sqrt(b*b -4*a*c))/2*a
    x2 = (- b + math.sqrt(b*b -4*a*c))/2*a
    x1_ =(- b - sign(b)*math.sqrt(b*b -4*a*c))/2*a
    x2_ =c / (a*x1_)

    print ("a= %27.20e"% a)
    print ("b= %27.20e"% b)
    print ("c= %27.20e"% c)
    print ("x1= %27.20e"% x1)
    print ("x2= %27.20e"% x2)
    e1 = a*x1*x1+b*x1+c
    e2 = a*x2*x2+b*x2+c
    print ("e1= %27.20e"% e1)
    print ("e2= %27.20e"% e2)
    print ("x1'= %27.20e"% x1_)
    print ("x2'= %27.20e"% x2_)
    e1_ = a*x1_*x1_+b*x1_+c
    e2_ = a*x2_*x2_+b*x2_+c 
    print ("e1'= %27.20e"% e1_)
    print ("e2'= %27.20e"% e2_)


main(1.0,-100000.0 , 1.0)
