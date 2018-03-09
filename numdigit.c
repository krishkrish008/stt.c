#include <stdio.h>
void main()
{
char str[100];
char *s = str;
int alpha,dig,o;
clrscr();
alpha=dig=o=0;
printf("Enter any string : ");
gets(str);
while(*s)
{
if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
alpha++;
else if(*s>='0'&& *s<='9')
dig++;
else
o++;
s++;
}
printf("Alphabets = %d\n", alpha);
printf("NUMERIC = %d\n", dig);
getch();
}
