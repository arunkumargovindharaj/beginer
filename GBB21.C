#include<stdio.h>
void main()
{
int n,a,d,i,c=0;
clrscr();
scanf("%d%d%d",&n,&a,&d);
for(i=n;i<1;i--);
{

//c=c+(a+(n-1)*d));  }
while(n)
{
c=c+a+(n-1)*d;
n--;
}

printf("%d",c);
		 }
getch();
}