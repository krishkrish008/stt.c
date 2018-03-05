#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\nEnter first value");
scanf("%d",&a);
printf("\nEnter the second value");
scanf("%d",&b);
c=(a*b);
if(c%2==0)
printf("\nEven number");
else
printf("\nOdd number");
getch();
}
