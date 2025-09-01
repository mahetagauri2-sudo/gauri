#include<stdio.h>
#include<conio.h>
int main()
{
 int kilograms,grams;
  clrscr();
  printf("Enter weight in kilograms:");
  scanf("%d",&kilograms);
  grams= kilograms * 1000;
  printf("%d kilograms = %d grams\n",kilograms,grams);
  getch();
return 0;
}