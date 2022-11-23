#include<stdio.h>
#include<conio.h>
void primefact(int num);
int main()
{
 int num;
    printf("enter a number: ");
    scanf("%d",&num);
      primefact(num);
  return 0;
}
void primefact(int num)
{ int i=2;
     printf("All prime factor of given num is: ");
    while(num!=1)
    {
      if(num%i==0){
         printf("%d,",i);
         num=num/i;
      }
      else
        i++;
    }
}
