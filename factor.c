#include<stdio.h>
#include<limits.h>
int main(void){
  unsigned long long int i, A;
  int flag=0;
  printf("please input under 18446744073709551615 :");
  scanf("%llu",&A);

  /*
  A=13;
  A_MAX=18446744073709551615;
  
  while(A<=18446723999999999999){
  flag=0;
  */

  if(A % 2 == 0) flag++;
  if(A % 3 == 0) flag++;
  if(A % 5 == 0) flag++;
  if(A % 7 == 0) flag++;
  if(A %11 == 0) flag++;

  for(i=13;i*i<A+1&&flag==0&&i<4294964985;){
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=14;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=14;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=14;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i==4294967294){
      flag=-1; 
      break;
    }
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=18;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=14;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=14;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=14;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=20;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=14;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=18;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=22;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=18;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=34;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=18;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=14;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=14;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=20;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=24;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=18;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=16;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=14;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=18;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=16;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=22;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=14;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=16;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=10;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=18;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=24;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=16;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=16;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=8;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=6;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=4;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=12;
    if(i*i>A+1) break;
    if(A%i==0) flag++;
    i+=2;
    if(i*i>A+1) break;
    if(A%i==0)flag++;
    i+=22;
  }

  /*
  if(flag==0) printf("%llu ",A);
  A++;
  }
  printf("\n");
  */

  
  if(flag==0){ 
    printf("Prime.\n");
  }else if(flag==-1){
    printf("too huge number.\n");
  }else{
    printf("Not Prime.\n");
  }
  
  
  return 0;
}
