#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[50],b[50];
clrscr();
printf("Enter 1st string");
gets(a);
printf("\nEnter second string");
gets(b);
strcat(a,b);
printf("\nString concatenation is %s",a);
getch();
}
