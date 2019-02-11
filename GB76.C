#include<stdio.h>
void main()
{
int num,k,i;
clrscr();
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
k=1;
break;
}
}
if(k==1)
printf("yes");
getch();
}