#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/assign/std/vector.hpp>
#include <boost/assign/list_of.hpp>
#include <boost/foreach.hpp>
#include <boost/lambda/bind.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/range/algorithm.hpp>
using namespace boost::assign;
using namespace boost::lambda;

int partition(std::vector<int>a , int n1, int n2);
int sort(std::vector<int>a, int n1,int n2);

int main(){
  int N;
  std::vector<int> a;
  a += 20,62,17,38,76,92,59,11,93,88,79,50,89,67,75,26,83,22,13,48;
  N = a.size();
  
  BOOST_FOREACH(int &n ,a){
    std::cout<< n << " ";
  }
  std::cout<< std::endl;

  partition(a,0,N);
  //std::cout<< partition(a,0,N)<<std::endl;
 BOOST_FOREACH(int &n ,a){
    std::cout<< n << " ";
  }
  std::cout<< std::endl;

   sort(a,0,N);
   BOOST_FOREACH(int &n ,a){
    std::cout<< n << " ";
  }
  std::cout<< std::endl;
}

int partition(std::vector<int>a , int n1, int n2){
  int p,k,i,j;
  p = a[n1];
  k = n1;
  for(i=n1;i<n2;i++){
    if(a[i]<p){
      a.insert(a.begin()+k,a[i]);
      a[k] = a[i];
      for(j=k;j<i+1;j++){
	a[j+1]=a[j];
      }
      //a.erase(a.begin()+k);
      k = k+1;
      a[k] = p;
      BOOST_FOREACH(int &n ,a){
      std::cout<< n << " ";
  }
  std::cout<< std::endl;
    }
  }
  return k;
}

int sort(std::vector<int>a, int n1,int n2){
  int c;
  if((n2-n1)<= 1){
    return 0;
  }
  c = partition(a,n1,n2);
  sort(a,n1,c);
  sort(a,c+1,n2);
  printf("11\n");
  BOOST_FOREACH(int &n ,a){
    std::cout<< n << " ";
  }
  std::cout<< std::endl;
}
