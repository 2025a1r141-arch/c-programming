#include <stdio.h>

int main() {
    int i, num, max;
    printf("Enter 10 numbers:\n");
    scanf("%d", &max);
    for(i = 1; i < 10; i++) {
        scanf("%d", &num);
        if(num > max) {
            max = num;
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}