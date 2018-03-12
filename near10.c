#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\nEnter the value of a");
scanf("%d",&a);
if(a%10==0)
{
b=a+(10 - (a %10));
printf("Next multiples of 10:%d",b);
}
else if(a%10==1)
{
b=a+9;
printf("%d",b);
}
else if(a%10==2)
{
b=a+8;
printf("%d",b);
}
else if(a%10==3)
{
b=a+7;
printf("%d",b);
}
else if(a%10==4)
{
b=a+6;
printf("%d",b);
}
else if(a%10==5)
{
b=a+5;
printf("%d",b);
}
else if(a%10==6)
{
b=a+4;
printf("%d",b);
}
else if(a%10==7)
{
b=a+3;
printf("%d",b);
}
else if(a%10==8)
{
b=a+2;
printf("%d",b);
}
else if(a%10==9)
{
b=a+1;
printf("%d",b);
}
else
printf("\nHi");

getch();
}
