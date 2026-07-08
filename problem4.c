#include<stdio.h>
   // Program to calculate perimeter of a rectangle
int main()
{
    float a, b;
    printf("enter two sides");
    scanf("%f %f", &a, &b);

    printf("perimeter is : %f", 2 * (a + b));
    return 0;
}