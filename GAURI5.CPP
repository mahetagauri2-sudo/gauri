#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,div,mul,sum,sub;
  clrscr();
  printf ("Enter No1:");
  scanf ("%d",&a);
  printf("Enter No2:");
  scanf("%d",&b);
  div = a/b;
  mul= a*b;
  sum= a+b;
  sub= a-b;
  printf(" division=%d", div);
  printf("\n multiplication=%d", mul);
  printf("\n sum=%d", sum);
  printf("\n subtraction=%d", sub);
 getch ();
 return 0;
}