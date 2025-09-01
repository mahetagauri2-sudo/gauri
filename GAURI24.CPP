#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,temp;
  clrscr();
  printf("enter two numbers:");
  scanf("%d%d",&a,&b);
  temp=a;
  a=b;
  b=temp;
  printf("after swapping: a=%d,b=%d",a,b);

  getch();
}