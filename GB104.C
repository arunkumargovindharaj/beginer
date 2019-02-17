#include<stdio.h>
void main()
{
int n,k,i,res=1;
clrscr();
scanf("%d%d",&n,&k);
for(i=1;i<=k;i++)
{
res=res*n;
}
printf("%d",res);
getch();
}