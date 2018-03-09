#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\nEnter the value of a");
scanf("%d",&a);
printf("\nEnter the value of b");
scanf("%d",&b);
printf("\nThe values before swapping");
printf("\n%d",a);
printf("\n%d",b);
a=a^b;
b=a^b;
a=a^b;
printf("\nThe values after swapping");
printf("\n%d",a);
printf("\n%d",b);
getch();
}
