#include<stdio.h>

int print_byte_short(unsigned short s){
  int i;
  unsigned char *p;
  p = (unsigned char*)&s;
  for(i=0; i<sizeof(unsigned short); i++){
    printf("%02x",*p);
    p++;
  }
  printf("\n");
}

int print_byte_int(unsigned int s){
  int i;
  unsigned char *p;
  p = (unsigned char*)&s;
  for(i=0; i<sizeof(unsigned int); i++){
    printf("%02x",*p);
    p++;
  }
  printf("\n");
}
int print_byte_long(unsigned long s){
  int i;
  unsigned char *p;
  p = (unsigned char*)&s;
  for(i=0; i<sizeof(unsigned long); i++){
    printf("%02x",*p);
    p++;
  }
  printf("\n");
}

int main(int argc, char* argv[]){
  unsigned short u1;
  unsigned int u2;
  unsigned long u3;
  
  u1 = 0xabcd;
  u2 = 0x1234abcd;
  u3 = 0x1234567890abcdef;
  
  printf("u1 = %x : ", u1);
  print_byte_short(u1);printf("\n");
  printf("u2 = %x : ", u2);
  print_byte_int(u2);printf("\n");
  printf("u3 = %x : ", u3);
  print_byte_long(u3);printf("\n");
  
  return 0;
}
