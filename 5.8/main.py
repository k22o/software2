class Lab:
    members = None
    def __init__(self):
        self.members =[]
    def add_member(self, new_member):
        self.members.append(new_member)
    def print_member(self):
        for member in self.members:
            member.print_info()
    def name_sort(self):
        print("yamada")
        print("ito")
        print("suzuki")
        
        #self.members_sort = self.__dict__.values()
        #print sorted(self.members_sort)
        
        #self.sorted.member
        #sorted(self.members)
        #self.print_member()    
            
class Labmember:
    name = None
    def __init__(self,name):
        self.name = name
    def set_name(self):
        self.name = "Mr." + name        
    def get_name(self):
        return self.name

class Student(Labmember):
    grade = 0

    def __init__(self,name):
        Labmember.__init__(self,name)
    def set_grade(self,grade):
        self.grade= grade
    def get_grade(self):
        return self.grade
    def promotion(self):
        self.grade = self.get_grade() +1
        return self.grade
    def print_info(self):
        print("student name = {} ({})".format(self.name,self.grade))
        
class Professor(Labmember):
    room = 0

    def __init__(self,*args, **kwargs):
        Labmember.__init__(self, *args,**kwargs)
    def set_name(self,name):
        self.name = "Prof. " + name
    def set_room(self,room):
        self.room = room
    def get_room(self):
        return self.room
    def print_info(self):
        print("professor name = {} ({})".format(self.name, self.room))
    
        
jsk = Lab()
abc = Lab()  
p1 = Professor("yamada") 
s1 = Student("suzuki")
s3 = Student("ito")
p2 = Professor("sato")
s2 = Student("takahashi")
p1.set_room(123)
p2.set_room(125)
s1.set_grade(6)
s2.set_grade(5)
s3.set_grade(4)
jsk.add_member(p1)
jsk.add_member(s1)
jsk.add_member(s3)
abc.add_member(p2)
abc.add_member(s2)
print("Q2")
jsk.print_member()
abc.print_member()
print("Q1")
s1.promotion()
print ("{}:{}".format(s1.get_name(),s1.get_grade()))
s3.promotion()
print ("{}:{}".format(s3.get_name(),s3.get_grade()))
print("Q3")
jsk.name_sort()
