#include<stdio.h>
#include<math.h>
int main(){
    float a,power;
    printf("enter the coordinates of 1st point(a):");
    scanf("%f",&a);
power=pow(a,2);
printf("the power is=%.2f\n",power);
return 0;
}