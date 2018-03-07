#include<stdio.h>
#include<conio.h>
void main()
{
long int a,b,c;
clrscr();
printf("\nEnter any number");
scanf("%ld",&a);
if(a%2==0)
{
b=a+2;
c=a-2;
printf("\nNearest Even number before the value is %ld",c);
printf("\nNearest Even number after  the value is %ld",b);
}
else if(a%2!=0)
{
b=a+1;
c=a-1;
printf("\nNearest Even number before the value is %ld",c);
printf("\nNearest Even number after  the value is %ld",b);
}
else
{
printf("\nThis is not anumber");
}
getch();
}
