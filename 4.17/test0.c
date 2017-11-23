/*test0.c*/
#include<stdio.h>

/*testは２つの整数の積を計算して返す*/
int test(int i , int j){
  return i*j;
}

/*testによる積と5の大小を比較する*/
int main(int agc, char* argv){
  int i,j,k;/*i,j,kは整数型*/
  i=3;/*iを３とする*/
  j=2;/*jを２とする*/
  k = test(i,j); /*kはiとjの積*/
  
  /*kが5より大きいか5以下を判断する。*/
  if(k>5)printf(">5\n");
  else printf("<=5\n");
  return 0;
}
