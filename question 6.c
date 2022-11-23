#include<conio.h>
int fact(int);
int main()
{
  int num,sum;
    printf("enter range to print factorial: ");
    scanf("%d",&num);
     sum=fact(num);
     printf("factorial is %d",sum);
  return 0;
}
int fact(int x)
{
  int i,sum=1;
    for(i=1;i<=x;i++){
        sum=sum*i;
    }
  return sum;
}
