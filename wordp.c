#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char t[100];
int a,i,w=1;
clrscr();
printf("\nEnter the string");
gets(t);
a=strlen(t);
for(i=0;i<a;i++)
{
if(t[i]!=' '&&t[i+1]==' ')
w=w+1;
}
printf("Words%d",w);
getch();
}
