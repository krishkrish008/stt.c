#include <stdio.h>
#include<string.h>
int main() 
{
char aa[50];
int i,c=0;
gets(aa);
for(i=0;aa[i]!='\0';i++)
{
if(aa[i] == ' ')
c++;
}
printf("%d",c);
return 0;
}
