class Lab{
 private:
  std::vector<LabMember*> members;
  int n_members;
  
 public:
  Lab() {
    n_members = 0;
  }
  ~Lab() {}

  void AddMember(LabMember* new_member){
    members.push_back(new_member);
    n_members++ ;  
  }
  void PrintMember(){
    int i;
    for(i=0;i<n_members;i++){
      members[i]->PrintInfo();
    }
  }
  void SortMembers(){
    std::sort(members.begin(),members.end(),std::greater<LabMember*>());
    /*for(int i=0;i<n_members;i++){
 
      }*/
    PrintMember();
  }
};
