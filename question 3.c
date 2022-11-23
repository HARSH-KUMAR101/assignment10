#include<stdio.h>
#include<conio.h>
int fun(int num);
int main()
{
  int num,result;
    printf("enter a number: ");
    scanf("%d",&num);
      result=fun(num);
      if(result==1)
       printf("%d is an even num",num);
      else
       printf("%d is an odd num",num);
   return 0;
}
int fun(int num_1)
{
  if(num_1%2==0)
    return 1;
  else
    return 0;
}
