#include <stdio.h>
#include <conio.h>

void main() {
    int a, b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("Largest = %d, Smallest = %d", a, b);
    else if(b > a)
        printf("Largest = %d, Smallest = %d", b, a);
    else
        printf("Both numbers are equal.");

    getch();
}
