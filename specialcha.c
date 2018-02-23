#include <stdio.h>
#define Max 100
int main()
{
char str[Max];
char *s=str;
int alphabets, digits, others;
alphabets=digits=others=0;
printf("Enter special character only: ");
gets(str);
while(*s)
{
if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
printf("\nAlphabets are also present");
else if(*s>='0' && *s<='9')
printf("\nThe numbers are also present");
else
others++;
s++;
}
printf("\nSpecial characters = %d", others);
return 0;
}
