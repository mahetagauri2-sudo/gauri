#include <stdio.h>
#include <conio.h>

void main() {
    float gross, discount, netsales;
    clrscr();
    printf("Enter gross sales: ");
    scanf("%f", &gross);

    if(gross > 20000)
        discount = gross * 0.15;
    else if(gross > 10000)
        discount = gross * 0.10;
    else
        discount = gross * 0.05;

    netsales = gross - discount;
    printf("Net Sales = %.2f", netsales);

    getch();
}
