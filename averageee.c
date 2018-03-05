#include<stdio.h>
#include<conio.h>
void main()
{
float i,n,a[5],sum=0;
float d,g;
clrscr();
printf("\nEnter the value of n");
scanf("%f",&n);
for(i=0;i<n;i++)
{
printf("\nEnter the number");
scanf("%f",&d);
sum=sum+d;
printf("sum%f",sum);
}
g=(sum/n);
printf("\nAverage is %f",g);
getch();
}
