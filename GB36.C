#include<stdio.h>
void main()
{
int i,c=0;
char a[100];
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
  {
    if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z'))
      {
      //continue;

      }
   else
   {
    c++;
  }
  }
printf("%d",c);
getch();
}

