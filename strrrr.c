#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int b,i;
clrscr();
printf("\nEnter string");
scanf("%s",a);
printf("\nEnter how many times string has to be displayed");
scanf("%d",&b);
for(i=0;i<b;i++)
{
printf("\n%s",a);
}
getch();
}
