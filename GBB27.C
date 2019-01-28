#include<stdio.h>
void main()
{
int i;
char a[10];
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='a')&&(a[i]<'z'))
printf("no");
else
printf("yes");
}
getch();
}
