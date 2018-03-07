#include <stdio.h>
#include<conio.h>
void main()
{
int i,n,r,s=0;
clrscr();
printf("Enter any number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
s=s+r;
n=n/10;
}
printf("\nThe Sum of given digits %d",s);
getch();
}
