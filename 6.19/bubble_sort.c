#include<stdio.h>
#include<stdlib.h>

int *read_array(char *fname, int length,int *len);
void print_array(int num[], int length);
void bubble_sort(int *num, int length);

int main(int argc, char * argv[]){
  int length, *num;
  char *fname = "rand.txt";
  printf("reading from %s \n",fname);
  num = read_array(fname,num,&length);
  print_array(num, length);
  bubble_sort(num,length);
  print_array(num,length);
  free(num);
  return (0);
}


void bubble_sort(int *num, int length){

  int i, n, tmp;
  for(i=0;i<length;i++){
    for(n=length -i; n>i;n--){
      if(num[n]< num[n-1]){
	tmp = num[n];
	num[n] = num[n-1];
	num[n-1] = tmp;
      }
    }
  }
}
