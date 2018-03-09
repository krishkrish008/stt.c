#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,diff;
printf("\nEnter the first value greater than second value");
printf("\nEnter the value of a");
scanf("%d",&a);
printf("\nEnter the value ofb");
scanf("%d",&b);
diff=(a-b);
if(diff%2==0)
{
printf("\nEven");
}
else
{
printf("\nOdd");
}
getch();
}
