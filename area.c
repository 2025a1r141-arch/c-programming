#include<stdio.h>
int main ()
{
     int length, breadth;
     int area=1; 
    printf("enter the length of the side of rectangle:");
    scanf("%d",&length);
    printf("enter the breadth  of the side of  rectangle:");
    scanf("%d",&breadth);
    area =length*breadth;
    printf("area of rectangle : %d\n",area);
    return 0;
}