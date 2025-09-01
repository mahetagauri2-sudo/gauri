#include<stdio.h>
#include<conio.h>
int main()
{
 int pounds,dollars,rupees;
  clrscr();
  printf("Enter amount in dollars:");
  scanf("%d",&dollars);
  rupees= dollars * 48;
  pounds= rupees/70;
  printf("%d dollars = %d pounds\n",dollars,pounds);
  getch();
return 0;
}