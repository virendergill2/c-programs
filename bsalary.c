#include <stdio.h>
#include<conio.h>
void main()
{
    float salary, hra, da, gs;

    printf("Enter the salary: ");
    scanf("%f", &salary);

    if (salary <= 10000) {
        hra = 0.2 * salary;
        da = 0.8 * salary;
        gs = salary + hra + da;
    } else if (salary <= 20000) {
        hra = 0.25 * salary;
        da = 0.9 * salary;
        gs = salary + hra + da;
    } else {
        hra = 0.3 * salary;
        da = 0.95 * salary;
        gs = salary + hra + da;
    }

    printf("Gross salary: %.2f\n", gs);
    printf("hra: %f\n", hra);
    printf("da: %f\n", da);

    getch();
}

