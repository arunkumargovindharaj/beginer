#include<stdio.h>
void main()
{
int i,n=0,c=0,d=0;
char s[200];
clrscr();
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
n++;
}
for(i=0;i<n;i++)
{
if(s[i]=='1'||s[i]=='0')
{
c++;
}
else
{
d++;
} }
if(n==c)
{
printf("yes");
}
else
printf("no");
getch();
}



