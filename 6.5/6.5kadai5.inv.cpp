#include<stdio.h>
#include<math.h>

double a[4][4] = { { 1,2,0,-1 },
		   { -5,1,2,0 },
		   { 2,0,9,1 },
		   { 1,-2,-1,7 }};
double inv_a[4][4];
double d;
int i, j, k; 
int n = 4;

int main() {
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      inv_a[i][j] = (i == j) ? 1.0 : 0.0;
    }
  }

  for (i = 0; i < n; i++) {
    d = 1 / a[i][i];
    for (j = 0; j < n; j++) {
      a[i][j] = a[i][j]*d;
      inv_a[i][j] = inv_a[i][j]* d;
    }
    for (j = 0; j < n; j++) {
      if (i != j) {
	d = a[j][i];
	for (k = 0; k < n; k++) {
	  a[j][k] = a[j][k] - a[i][k] * d;
	  inv_a[j][k] = inv_a[j][k]-inv_a[i][k] * d;
	}
      }
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf(" %lf", inv_a[i][j]);
    }
    printf("\n");
  }
}
