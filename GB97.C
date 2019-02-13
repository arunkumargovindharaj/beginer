#include<stdio.h>
void main()
{
int i,l=0,sum=0,a,temp=0;
clrscr();
scanf("%d",&a);
while(a)
{
temp=a%10;
//sum=sum+temp;
a=a/10;

printf("%d",temp);  }
getch();
}