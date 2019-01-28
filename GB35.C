#include<stdio.h>
void main()
{
int i,c=0,d=0;
char a[100];
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
  {
    if(a[i]>='0'&&a[i]<='9')
      {
      c=c++;
      }
  //  else
  //  {
   //  b++;
 //   }
  }
printf("%d",c);
getch();
}

