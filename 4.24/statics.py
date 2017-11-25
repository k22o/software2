def ave(x):
    a = len(x)
    sum = 0
    for i in range(a):
        sum = sum + x[i]
    return sum/a

def var(x):
    a = len(x)
    sum_2 = 0
    for i in range(a):
        sum_2 = sum_2 + (x[i]-ave(x))*(x[i]-ave(x))
    return sum_2 /a

print ave([1,2,3,4,5])
print var([1,2,3,4,5])
