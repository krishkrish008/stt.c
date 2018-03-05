#include<stdio.h>
void main()
{
int a[100],i,n,large,small;
clrscr();
printf("\nEnter number of elements");
scanf("%d",&n);
printf("\nEnter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
large=small=a[0];
}
for(i=1;i<n;i++)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("\n Largest element is %d",large);
printf("\n Smallest element is %d",small);
getch();
}
