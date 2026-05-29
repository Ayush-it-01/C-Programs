#include<stdio.h>

int main() {
    float m1, m2, m3, total, percentage;

    printf("Enter marks of 3 subjects: ");
    scanf("%f%f%f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%", percentage);

    return 0;
}
