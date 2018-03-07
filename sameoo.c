#include<stdio.h>
#include<conio.h>
void main()
{
long int n,r,rem,di;
clrscr();
printf("\nEnter any value");
scanf("%ld",&n);
while(n!=0)
{
rem=n%10;
r=(r*10)+(rem);
n=n/10;
}
while(r!=0)
{
di=r%10;
r=r/10;
printf("%ld ",di);
}
getch();
}
