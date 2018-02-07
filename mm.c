#include <stdio.h>
void main()
{
int i, spa;
char a[30];
printf("enter the string");
scanf("%s", a);
for(i=0 ; a[0]!="\0" ; i++)
{
if (a[i]=' ')
{
spa++;
}
}
printf("Number of spaces is %d", spas);
printf("Number of words is %d", spa + 1);
getch();
}
