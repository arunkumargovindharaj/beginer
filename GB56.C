#include<stdio.h>
void main()
{
int i;
char a[100],c=0,d=0;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
//while(num)
//{
if((a[i]>='a' && a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
c++;
}
if(a[i]>='0' && a[i]<='9')
{
d++;
}  }
if((c>=1)&&(d>=1))
{
printf("yes");
}
else
{
printf("no");
}

getch();
}