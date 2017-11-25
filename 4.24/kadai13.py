def zip(list1, list2):
    n = len(list1)
    list3 =[]
    for i in range(n):
       p = list1[i]
       q = list2[i]
       list3.append([p,q])
    print list3
        
zip(['a','b','c'],[0,1,2])
