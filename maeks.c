#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int avg;
    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    avg = (m1 + m2 + m3 + m4 + m5) / 5;
    printf("Average Marks = %.2f\n", avg);
    if(avg >= 90)
        printf("Grade: A+\n");
    else if(avg >= 80)
        printf("Grade: A\n");
    else if(avg >= 70)
        printf("Grade: B\n");
    else if(avg >= 60)
        printf("Grade: C\n");
    else if(avg >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F (Fail)\n");

    return 0;
}

