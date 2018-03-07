#include <stdio.h>
void main()
{
int i,n,t1=0,t2=1,nt;
printf("\nEnter nums of terms ");
scanf("%d", &n);
printf("\n fibo");
for(i=1;i<=n;i++)
{
printf("\n%d, ", t1);
nt=t1+t2;
t1=t2;
t2=nt;
}
getch();
}
