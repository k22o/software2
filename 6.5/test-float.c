#include<stdio.h>

int print_bit(float f){
  int i;
  unsigned int *j = ((unsigned int*)&f);
  unsigned int s = *j;
  for(i = 0; i<32; i++){
    printf("%c",((0x80000000)&s)?'1':'0');
    if((i== 0)||(i==8)){printf(" ");}
    s = s << 1;
  }
  printf("\n");
}

int main (int argc, char* argv[]){
  float f1,f2,f3;
  f1 = 2.625;
  printf("f1 = %-12f: ", f1);
  print_bit(f1);
  printf("\n");
  f2 = 0.0033;
  printf("f2 = %-12f: ", f2);
  print_bit(f2);
  printf("\n");
  f3 = f1 + f2;
  printf("f3 = %-12f: ", f3);
  print_bit(f3);
  printf("<-丸め誤差\n");

  
}
