#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\nEnter the number");
scanf("%d",&a);
if(a%13==0)
printf("\nMultiple of 13");
else
printf("\nNot a multiple of 13");
getch();
}
