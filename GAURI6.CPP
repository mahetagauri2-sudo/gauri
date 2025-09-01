#include<stdio.h>
#include<conio.h>
int main()
{
  int hours,minutes;
  clrscr();
  printf("Enter time in minutes:");
  scanf ("%d",&minutes);
  hours=(float) minutes / 60;
  printf("%d minutes =%d hours\n"minutes,hours);
 getch ();
 return 0;
}