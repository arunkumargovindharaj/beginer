#include<stdio.h>
void main()
{
int i,l=0;
char a[100];
clrscr();
scanf("%s",&a);
 for(i=0;a[i]!='\0';i++)
{
l++;
}
if(l%2==0)
{
a[l/2]='*';
a[(l/2)-1]='*';
}
else
{
a[l/2]='*';
}
printf("%s",a);
getch();
}