#include<stdio.h>
#include<conio.h>
int main(){
 float x,p,r,t;
   float interest(float,float,float);
   printf("enter the principle amount:");
   scanf("%f",&p);
   printf("enter the rate of interest:");
   scanf("%f",&r);
   printf("enter time period:");
   scanf("%f",&t);
   x=interest(p,r,t);
   printf("simple interest is:%.2f",x);
return 0;
}
float interest(float a,float b,float c){
  float si;
  si=a*(b/100)*c;
  return(si);
}
