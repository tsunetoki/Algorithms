#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 100000000

int main(void){
  int i, count=0;
  double x, y;
  srand((unsigned)time(NULL));
  for(i=0;i<N;i++){
    x=(((double)(rand()%1000000))/1000000);
    y=(((double)(rand()%1000000))/1000000);
    if((x*x*y*y)<1.0){
      count++;
    }
  }
  printf("%f\n",count*4.0/N);
  return 0;
}
