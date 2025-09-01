#include<stdio.h>
#include<conio.h>
int main()
{
 int hours,minutes;
  clrscr();
  printf("Enter time in hours:");
  scanf("%d",&hours);
  minutes= hours * 60;
  printf("%d hours = %d minutes\n",hours,minutes);
  getch();
return 0;
}