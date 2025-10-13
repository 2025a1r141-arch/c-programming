#include <stdio.h>
int main() {
    int noofdays;'l'
    printf("Enter number of days in the month: ");
    scanf("%d", &noofdays);

    if (noofdays == 31) {
        printf("Months with 31 days: January, March, May, July, August, October, December\n");
    } else if (noofdays == 30) {
        printf("Months with 30 days: April, June, September, November\n");
    } else if (noofdays == 28 || noofdays == 29) {
        printf("Month with 28 or 29 days: February\n");
    } else {
        printf("Invalid number of days!\n");
    }
    return 0;
}

