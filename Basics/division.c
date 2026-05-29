#include<stdio.h>

int main() {
    float a, b, div;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    div = a / b;

    printf("Division = %.2f", div);

    return 0;
}
