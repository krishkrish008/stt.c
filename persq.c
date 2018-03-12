#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\nEnter first number");
scanf("%d",&a);
printf("\nEnter second number");
scanf("%d",&b);
if(a==b)
{
printf("perfect square");
printf("value is: %d",(a*b));
}
else
{
printf("\nNot aperfect square");
}
getch();
}
