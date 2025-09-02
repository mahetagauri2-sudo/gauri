#include <stdio.h>
#include <conio.h>

void main() {
    int m1, m2, m3, total;
    float avg;
    clrscr();
    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    if(m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Student Fail (less than 35 in a subject)");
    }
    else {
        total = m1 + m2 + m3;
        avg = total / 3.0;

        printf("Total = %d, Average = %.2f\n", total, avg);

        if(avg >= 70)
            printf("Grade: Distinction");
        else if(avg >= 60)
            printf("Grade: First Class");
        else if(avg >= 50)
            printf("Grade: Second Class");
        else if(avg >= 35)
            printf("Grade: Third Class");
        else
            printf("Fail");
    }

    getch();
}
