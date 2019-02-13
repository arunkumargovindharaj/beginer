#include<stdio.h>
void main()
{
int i,n1,n2;
clrscr();
for(i=0;i<3;i++);
{
scanf("%d%d",&n1,&n2);
if(n1>n2)
{
printf("%d\n",n1-n2);
}
else
{
printf("%d\n",n2-n1);
}  }
getch();
}