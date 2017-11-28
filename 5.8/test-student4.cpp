#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <functional>
#include "labmember4.h"
#include "lab4.h"
#include "student4.h"
#include "professor4.h"

int main (int argc, char **argv){
  Lab jsk , abc;
  Professor *p1= new Professor();
  Student *s1 = new Student();
  Professor *p2= new Professor();
  Student *s2 = new Student();
  Student *s3 = new Student();

    p1->SetName("yamada");
    s1->SetName("yoshida");
    p1->SetRoom(123);
    s1->SetGrade(4);
    jsk.AddMember(p1);
    jsk.AddMember(s1);
    //jsk.PrintMember();
    p2->SetName("ito");
    s2->SetName("sato");
    p2->SetRoom(125);
    s2->SetGrade(5);
    s3->SetName("kato");
    s3->SetGrade(5);
    abc.AddMember(p2);
    abc.AddMember(s2);
    abc.AddMember(s3);
       
    printf("Q1\n");
    jsk.PrintMember();
    printf("進級\n");
    s1->Promotion();
    printf("Q2\n");
    abc.PrintMember();
    printf("Q3\n");
    abc.SortMembers();
    delete p1;
    delete s1;
    delete p2;
    delete s2;
    delete s3;
    
    return 0;
}
