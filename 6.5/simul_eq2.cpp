#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 3

double a[][3]={{1.0   ,1.0/2 ,1.0/3},
	      {1.0/2 ,1.0/3 ,1.0/4},
	      {1.0/3 ,1.0/4 ,1.0/5}};
double b[]={1.0 ,2.0 ,3.0};

double c[][4]={{1.0   ,1.0/2 ,1.0/3, 1.0},
	      {1.0/2 ,1.0/3 ,1.0/4, 2.0},
	      {1.0/3 ,1.0/4 ,1.0/5,3.0}};

int main(){
  double pivot, mul;
  int i,j,k,n;

  for (i = 0; i < N; i++){

    pivot = c[i][i];
      for (j = 0; j < N + 1; j++){
	c[i][j] = (1 / pivot) * c[i][j];
      }

      for (k = i + 1; k < N; k++){
	mul = c[k][i];
	for (n = i; n < N + 1; n++){
	  c[k][n] = c[k][n] -  mul * c[i][n];
	}
      }
  }
  
  for (i = N - 1; i > 0; i--){
    for (k = i - 1; k >= 0; k--){
      mul = c[k][i];
      for (n = i; n < N + 1; n++){
	c[k][n] = c[k][n] - mul * c[i][n];
      }
    }
  }
  for(i = 0;i<N;i++){
    printf("x%d = %lf\n",i,c[i][3]);
  }
}
