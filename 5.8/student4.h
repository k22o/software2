class Student: public LabMember{
 private:
  int grade;
  
 public:
 Student() : LabMember(){}
   Student(char* _name)
    : LabMember(_name){
    grade = 0;
  }
  ~Student(){
  }
  void SetGrade(int _grade){
    grade = _grade;
  }
  int GetGrade(){
    return grade;
  }
  void PrintInfo(){
    printf("student name = %s,grade = %d\n",GetName(),GetGrade());
  }
  void Promotion(){
    grade = GetGrade();
    grade = grade + 1;
    printf("student name = %s,grade = %d\n",GetName(),grade); 
  }
};
