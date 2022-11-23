#include<stdio.h>
#include<conio.h>
int combination(int n,int r);
int fact(int);
int main()
{
 int n,r,result;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter n: ");
    scanf("%d",&r);
    result=combination(n,r);
      printf("combination is %d",result);
  return 0;
}
int combination(int n,int r)
{ int ans;
  ans=fact(n)/fact(n-r);
  return ans/fact(r);
}
int fact(int a)
{
  int i,sum=1;
    for(i=1;i<=a;i++)
    {
      sum=sum*i;
    }
  return sum;
}
