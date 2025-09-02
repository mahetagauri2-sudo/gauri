#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, c, largest, smallest;
    clrscr();
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;
    if(b > largest) largest = b;
    if(c > largest) largest = c;

    smallest = a;
    if(b < smallest) smallest = b;
    if(c < smallest) smallest = c;

    printf("Largest = %d\nSmallest = %d", largest, smallest);
    getch();
}
