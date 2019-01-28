#include<stdio.h>
void main()
{
int a[10],i,n,min;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
//max=0;
/*for(i=0;i<n;i++)
{  //max=0;
if(a[i]>max)
{
max=a[i];
} }
min=0; */
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
 min=a[i];  }
printf("%d",min);
getch();}

