#include<stdio.h>
#include<conio.h>
void main()
{
 int s1,s2,s3,total;
 float avg;
  clrscr();
  printf("enter marks of 3 subjects:");
  scanf("%d%d",&s1,&s2,&s3);
  total=s1+s2+s3;
  avg=total/3;
  printf("total=%d\n",total);
  printf("average=%.2f", avg);
  getch();
}