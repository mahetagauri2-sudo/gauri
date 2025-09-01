#include<stdio.h>
#include<conio.h>
int main()
{
 int kilograms,grams;
  clrscr();
  printf("Enter weight in grams:");
  scanf("%d",&grams);
  kilograms= grams /1000;
  printf("%d grams = %d kilograms\n",grams,kilograms);
  getch();
return 0;
}