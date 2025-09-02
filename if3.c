#include <stdio.h>
#include <conio.h>

void main() {
    float gross, allowance, deduction, netsalary;
    clrscr();
    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if(gross > 10000) {
        allowance = gross * 0.10;
        deduction = gross * 0.03;
    }
    else if(gross > 5000) {
        allowance = gross * 0.07;
        deduction = gross * 0.02;
    }
    else {
        allowance = 0;   // Not mentioned in question, assumed 0
        deduction = 0;
    }

    netsalary = gross + allowance - deduction;
    printf("Net Salary = %.2f", netsalary);
    getch();
}
