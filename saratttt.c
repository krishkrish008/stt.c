#include<stdio.h>
#include<conio.h>
void main()
{
char str1[50],str2[50];
int i,temp=0;
clrscr();
printf("Enter the 1st string" );
gets(str1);
printf("Enter the 2nd string" );
gets(str2);
for(i=0; str1[i]!='\0'; i++)
{
if(str1[i] == str2[i])
temp=1;
else
temp=0;
}
if(temp==1)
printf("Both strings are same");
else
printf("Both string not same");
getch();
}
