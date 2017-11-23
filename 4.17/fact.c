/*fact.c*/
#include <stdio.h>
#include <stdlib.h>

int fact(int x){
  /*xが正ならfact(x-1)をかけて、0以下のとき1を返す*/
  if(x >= 0){ 
#ifdef DEBUG
    printf("x = %d\n",x);
#endif
    return (x*fact(x-1));
  else{
#ifdef DEBUG
    printf("x=%d return 1\n",x);
#endif
    return 1;
  }
}

/*shellから数字を認識してfactを実行する*/
int main(int argc , char *argv[]){
  int x, ret;
  x = atoi(argv[1]);/*shellに入力された文字を数字として認識する*/
  ret = fact(x);
  printf("ret= %d\n",ret);
}
