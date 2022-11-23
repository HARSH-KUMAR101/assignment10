#include<stdio.h>
#include<conio.h>
void odd(int);
int main()
{
  int num;
    printf("enter range to print odd numbers: ");
    scanf("%d",&num);
     odd(num);
  return 0;
}
void odd(int x)
{
  int i;
    for(i=1;i<=x;i++){
        if(i%2==1)
          printf("%d\n",i);
    }
}
