
#include<stdio.h>

#define N 100

void quicksort(int, int);
int  partition(int, int);

int A[N]={145,926,535,879,323,846,264,383,279,528,841,971,699,937,510,520,974,944,592,78,164,628,608,99,862,34,825,342,170,679,824,808,651,328,306,647,938,460,95,505,823,172,535,408,128,481,174,502,841,27,193,852,110,559,644,629,489,549,38,196,442,881,975,665,934,461,284,564,823,376,783,165,271,190,91,456,856,692,346,348,610,454,326,482,133,360,726,249,142,73,743,872,373,769,357,837,258,698,952,246};

int main(void){
  int i, j;
  quicksort(0,N-1);
  for(j=0;j<10;j++){
    for(i=0;i<10;i++){
      printf("%3d ",A[10*j+i]);
    }
    printf("\n");
  }
  return 0;
}

void quicksort(int p, int r){
  if(p<r){
    int q = partition(p, r);
    quicksort(p, q-1);
    quicksort(q+1, r);
  }
}

int  partition(int p, int r){
  int x = A[r];
  int i = p-1;
  int j, tmp;
  for(j=p;j<=r-1;j++){
    if(A[j]<=x){
      i = i+1;
      tmp = A[i];
      A[i] = A[j];
      A[j] = tmp;
    }
  }
  tmp = A[i+1];
  A[i+1] = A[r];
  A[r] = tmp;
  return i+1;
}
