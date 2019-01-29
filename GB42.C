#include<stdio.h>
void main()
{
int i,c;
char a[10];
clrscr();
//scanf("%s",&a);
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
a[i]='\0';
 }
c=a;
 }
printf("%s",c);
getch();
}