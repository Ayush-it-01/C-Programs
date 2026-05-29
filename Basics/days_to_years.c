#include<stdio.h>

int main() {
    int days, years, weeks;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;

    printf("Years = %d\n", years);
    printf("Weeks = %d", weeks);

    return 0;
}
