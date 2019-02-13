#include<stdio.h>
void main()
{
int i,j, l=0,c;
char a[100];
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(a[i]==a[j])
{
c=1;
break;
}
else
{
continue;
}} }
if(c==1)
printf("no anagram");
else
printf("its anagram");
getch();
}