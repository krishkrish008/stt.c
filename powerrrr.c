#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("\nEnter num");
scanf("%d",&a);
b=a&(a-1);
if(b==0)
printf("\nPowers of 2");
else
printf("\nNot a power of2");
getch();
}
