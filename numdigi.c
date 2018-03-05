#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int co=0;
clrscr();
printf("\nEnter number");
scanf("%d",&n);
while(n != 0)
{
n=n/10;
co++;
}
printf("number of numeric digits%d",co);
getch();
}
