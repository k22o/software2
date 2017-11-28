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

//#define NUM 20

//std::vector<int> data{20,62,17,38,76,92,59,11,93,88,79,50,89,67,75,26,83,22,13,48};

int partition(std::vector<int> a,int n);
void sort(std::vector<int> a,int n);

int main(){
  std::vector<int> data;
  data += 20,62,17,38,76,92,59,11,93,88,79,50,89,67,75,26,83,22,13,48;

  int n = data.size();
    
  boost::for_each(data,[](int &n){std::cerr<< n << " "; });
  std::cerr<< std::endl;

  partition(data);
  boost::for_each(data,[](int &n){std::cerr<< n << " ";});
  std::cerr<< std::endl;

  sort(data,n);

  boost::for_each(data,[](int &n){std::cerr<< n << " ";});
  std::cerr<< std::endl;

  return 0;
}

int partition(std::vector<int> a,int n){
  int j,k;
  int p  = a[0];
  k=0;
  for(int i=1;i<n;i++){
    if(a[i]<p){
      a[k] = a[i];
      for(j=i;j>k+1;j--){
	a[j] = a[j-1];
      }
      a[++k] = p;
    }
  }
  return k;
}
void sort(std::vector<int> a,int n){
  int c;
  /*if(n<=1){
    return a;
    }*/
  c = partition(a);
  sort(a,c);
  sort(a[c+1],n-c-1);
}


/*#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

#define NUM 20

int data[NUM] = {20,62,17,38,76,92,59,11,93,88,79,50,89,67,75,26,83,22,13,48};

int partition(int a[], int n);
void sort(int a[], int n);

int main(){
  int i;

  for(i = 0; i<NUM; i++){
    printf("%d ",data[i]);
  }
  printf("\n");

  partition(data,NUM);

  for(i = 0; i<NUM; i++){
    printf("%d ",data[i]);
  }
    printf("\n");

  sort(data,NUM);

  for(i = 0; i<NUM; i++){
    printf("%d ",data[i]);
  }
    printf("\n");

  return 0;
}


int partition(int a[], int n){
  int p,i,j,k;
  p =a[0];
  k=0;
  for(i=1;i<n;i++){
    if(a[i]<p){
      a[k] = a[i];
      for(j=i;j>k+1;j--){
	a[j] = a[j-1];
      }
      a[++k] = p;
    }
  }
  return k;
}
void sort(int a[],int n){
  int c;
  if(n<=1){
    return;
  }
  c = partition(a,n);
  sort(a,c);
  sort(&a[c+1],n-c-1);
  }*/
