/*gcm.c*//*バ生じたバグ：qの初期値の設定不足により、while文がループされなかった*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){
  int a,b,p,q,temp;
  /*入力された文字を数字として認識*/
  a = atoi(argv[1]);
  b = atoi(argv[2]);

  if(a<b){/*aを大きい数にする*/
    temp = a;
    a = b;
    b = temp;
  }

  p =a/b;/*pは商*/
  q = a%b;/*qは余り*/
  
  /*ユークリッドの互除法を実行する*/
  while(q!=0){/*余りが0になるまで繰り返す*/
    a = b;
    b = q;
    p = a/b;/*商をpとする*/
    q = a%b;/*余りをqとする*/
#ifdef DEBUG   
    printf("%d\n",b);
#endif
  }
  printf("%d\n",b);
  return 0;
}
