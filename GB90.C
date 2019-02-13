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
for(i=0;i<l;i++)
{
if(a[i]>='0'&&a[i]<='9')
{
printf("%c",a[i]);
}}
getch();
}