#include<stdio.h>
#include<limits.h>
#define N 10

int A[N]={4,1,3,2,16,9,10,7,8,6};
int p, q, r;

void MERGESORT(int[],int,int);
void MERGE(int[],int,int,int);

int main(){
  int i;
  MERGESORT(A, 0, N-1);
  for(i=0;i<N;i++){
    printf("%d ",A[i]);
  }
  printf("\n");
  return 0;
}

void MERGESORT(int A[],int p,int r){
  if(p>=r){                  //
    return;                  //特殊行->要素数が1以下ならreturnする
  }                          //
  
  //p.28 MERGE-SORT(A,p,r)に沿って再帰呼び出しをする
  //以下教科書と同じ
  int q = (r+p)/2;
  MERGESORT(A, p, q);
  MERGESORT(A, q+1, r);
  MERGE(A,p,q,r);
}

void MERGE(int A[],int p,int q,int r){
  int i, j, k;
  int n1 = q-p+1;
  int n2 = r-q;
  int L[N];
  int R[N];

  for(i=0; i<n1; i++){
    L[i] = A[p+i];
  }
  for(j=0; j<n2; j++){
    R[j] = A[q+j+1];
  }
  L[n1] = INT_MAX;
  R[n2] = INT_MAX;
  i=0;
  j=0;
  for(k=p;k<=r;k++){
    if(L[i]<=R[j]){
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  }
}
