#include <stdio.h>
void main()
{
int n,count=0;
printf("enter the number is:");
scanf("%d",&n);
while(n)
{
n=n/10;
count++;
}
printf("%d",count);
   
getch();
}
