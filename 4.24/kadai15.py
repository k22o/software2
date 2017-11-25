deta=[['a',20],
           ['b',10],
           ['c',30],
           ['d',40]]

def sort(x):
    print(sorted(x, key=lambda x:x[1], reverse=True))
    
def input_name_old(x):
    name_old = input("input search word:")
    for i in range(2):
        for j in range(len(x)):
            if(x[j][i] == name_old):
                print x[j]

def add(x):
    x + [0,0]
    length = len(x)
    name = input("write name:")
    old = input("write old:")
    x[length-1][0]= name
    x[length-1][1]= old
    print x[length-1]
    
def delete_person(x):
    name = input("INPUT SEARCH NAME ex:")
    old =  input("INPUT SEARCH old :")
    for j in range(len(x)):
        if x[j][0] == name and x[j][1]==old:
            del x[j]
            break
    print x


select = input("serect mode 1:sort 2:input 3:add 4:delete ...")
if select == 1:
    sort(deta)
elif select == 2:
    input_name_old(deta)
elif select == 3:
    add(deta)
elif select ==4:
    delete_person(deta)

