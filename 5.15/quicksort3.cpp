#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <boost/assign/std/vector.hpp>
#include <boost/assign/list_of.hpp>
#include <boost/foreach.hpp>
#include <boost/lambda/bind.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/range/algorithm.hpp>
using namespace boost::assign;
using namespace boost::lambda;


std::vector<int> sort(std::vector<int>&a);

bool fa (int x){ return x < 20;}
bool fb (int x){ return x > 20;}

int main(){
  int a[20]= {20,62,17,38,76,92,59,11,93,88,79,50,89,67,75,26,83,22,13,48};
  std::vector<int> data(a,a+20);
  
  BOOST_FOREACH(int &n ,data){
    std::cout<< n << " ";
  }
  std::cout<< std::endl;
  
  data = sort(data);
  
  BOOST_FOREACH(int &n ,data){
    std::cout<< n << " ";
  }
  std::cout<< std::endl;
}

std::vector<int> sort(std::vector<int>&a){
  
  int N,n0,n1,p;
  std::vector<int>a0(a.size());
  std::vector<int>a1(a.size());
  N = a.size();
  n0 = a0.size();
  n1 = a1.size();
  
  if(N<=1){   return a;  }
  p = a[0];

  auto v0 = std::copy_if(a.begin(),a.end(),a0.begin(),fa);
  a0.resize(std::distance(a0.begin(),v0));
  auto v1 = std::copy_if(a.begin(),a.end(), a1.begin(),fb);
  a1.resize(std::distance(a1.begin(),v1));
  
  a0 = sort(a0);
  a1 = sort(a1);

  a0.resize(a0.size()+1);
  a0[a0.size()-1]=p;
  a0.insert(a0.end(),a1.begin(),a1.end());

  return a0;
}
