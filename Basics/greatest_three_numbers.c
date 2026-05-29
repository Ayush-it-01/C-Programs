#include<stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b && a > c) {
        printf("Greatest Number = %d", a);
    }
    else if(b > c) {
        printf("Greatest Number = %d", b);
    }
    else {
        printf("Greatest Number = %d", c);
    }

    return 0;
}
