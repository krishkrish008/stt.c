#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\nEnter any number ranging from 1 to 10");
scanf("%d",&a);
if(a>10)
{
printf("\nIt is greater than 10 - give a value less than 10");
}
else
{
switch(a)
{
case 1:printf("\nONE");
break;
case 2:printf("\nTWO");
break;
case 3:printf("\nTHREE");
break;
case 4:printf("\nFOUR");
break;
case 5:printf("\nFIVE");
break;
case 6:printf("\nSIX");
break;
case 7:printf("\nSEVEN");
break;
case 8:printf("\nEIGHT");
break;
case 9:printf("\nNINE");
break;
case 10:printf("\nTEN");
break;
}
}
getch();
}
