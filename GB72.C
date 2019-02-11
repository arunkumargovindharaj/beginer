#include<stdio.h>
void main()
{
int i,k;
char s[100],b[100];
clrscr();
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||
(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
{
k=1;
}
  }
if(k==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}