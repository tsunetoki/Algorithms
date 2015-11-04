#include<stdio.h>

#define N 10

void Build_Tree(int);
void Max_Heapify(int, int);
void Build_Max_Heap(int);

int A[N]={4,1,3,2,16,9,10,14,8,7};

int main(void){
  int i, j, n=N, tmp;
  for(i=0; i<N-1; i++){
    Build_Tree(n);
    n--;
    tmp=A[0];
    A[0]=A[n];
    A[n]=tmp;
  }
  for(j=0; j<N; j++){
    printf("%d ",A[j]);
  }
  printf("\n");
  return 0;
}

void Build_Tree(int n){
  int i;
  Build_Max_Heap(n);
  for(i=n; i!=0; i--){
    Max_Heapify(i, n);
  }
}

void Max_Heapify(int i, int n){
  int l=2*i;
  int r=2*i+1;
  int largest;
  if(l<=n && A[l-1]>A[i-1]){
    largest = l;
  } else {
    largest = i;
  }
  if(r<=n && A[r-1]>A[largest-1]){
    largest =r;
  }
  if(largest!=i){
    int tmp=A[i-1];
    A[i-1] = A[largest-1];
    A[largest-1] = tmp;
    Max_Heapify(largest, n);
  }
}

void Build_Max_Heap(int n){
  int i;
  for(i=n/2-1; i!=0; i--){
    Max_Heapify(i, n);
  }
}
