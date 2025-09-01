#include<stdio.h>
#include<conio.h>
int main()
{
 float rupees,dollars;
  clrscr();
  printf("Enter value in rupees:");
  scanf("%f",&rupees);
  dollars= rupees / 48;
  printf("%.2f dollars = %.2f rupees\n",dollars,rupees);
  getch();
return 0;
}