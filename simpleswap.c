#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,tempo;
clrscr();
printf("\nEnter the first value");
scanf("%d",&a);
printf("\nEnter the second value");
scanf("%d",&b);
printf("\n    VALUES BEFORE SWAPPING         ");
printf("\n %d   \n %d",a,b);
tempo=a;
a=b;
b=tempo;
printf("\n    VALUES AFTER  SWAPPING         ");
printf("\n %d        ",a);
printf("\n %d        ",b);
getch();
}
