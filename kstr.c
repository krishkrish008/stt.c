#include<stdio.h>
#include<conio.h>
void main()
{
int k,i;
char s[50];
clrscr();
printf("\nEnter the k value");
scanf("%d",&k);
printf("\nEnter the string");
scanf("%s",s);
for(i=0;i<k;i++)
{
printf("\n%s",s);
}
getch();
}
