#include<stdio.h>
#include<conio.h>
float area(float radius);
int main()
{
  float radius,a;
    printf("enter radius: ");
    scanf("%f",&radius);
      a=area(radius);
       printf("area of circle is %.2f",a);
   return 0;
}
float area(float r)
{
  return (3.14*r*r);
}
