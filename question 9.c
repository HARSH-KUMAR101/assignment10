#include<stdio.h>
#include<conio.h>
int find(int num,int n);
int main()
{
  int num,n,result;
      printf("enter a number: ");
      scanf("%d",&num);
      printf("enter a digit which is to be find: ");
      scanf("%d",&n);
       result=find(num,n);
        if(result==1)
            printf("yes! given number contains that given digit");
        else
            printf("no! given number does not contains that given digit");
 return 0;
}
int find(int num,int n)
{ int temp;
  while(num!=0)
  { temp=num%10;
    if(temp==n)
    {
     return 1;
    }
    num=num/10;
  }
  return 0;
}
