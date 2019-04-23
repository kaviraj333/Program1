#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b,c;
   clrscr();
   printf("Enter the largestnumber:");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b)
    {
     printf("The largest number is:%d",a);
     }
     else 
      {
      printf("the largest number is:%d",b);
      }
      else if(b>c)
       {
       printf("The largest number is:%d",c);
       }
       getch();
      } 
