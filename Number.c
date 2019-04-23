#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],j,n,i,d;
 clrscr();
printf("Enter the number:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(j=i+1;j<=n;j++)
    {
  if(a[i]<a[j])
  {
   d=a[i];
  a[i]=a[j];
  a[j]=d;
  }
 }
 getch();
}
