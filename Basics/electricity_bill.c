#include<stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    bill = units * 8;

    printf("Electricity Bill = %.2f", bill);

    return 0;
}
