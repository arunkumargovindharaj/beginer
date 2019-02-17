#include<stdio.h>
void main()
{
int n,i,m=0;
char s[100];
clrscr();
scanf("%d",&n);
while(n%2==0)
{
n=n/2;
}
printf("%d",n);
getch();
}