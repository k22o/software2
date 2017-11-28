#include<stdio.h>
#include<stdlib.h>
int cmp1(int *a, int *b){return (*a -*b);}
int cmp2(int *a, int *b){return (*b -*a);}

int main(){
  int a[10] = {1,4,6,10,9,3,2,5,7,8};

  qsort(a,10,sizeof(int),(int(*)(const void*, const void*))cmp1);
  for (int i = 0; i<10 ;i++){
    printf("%d",a[i]);
  }
  printf("\n");
  
  qsort(a,10,sizeof(int),(int(*)(const void*, const void*))cmp2);
  for (int i = 0; i<10; i++){
    printf("%d",a[i]);
  }
  printf("\n");
}
