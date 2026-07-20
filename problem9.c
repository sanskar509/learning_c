#include<stdio.h>
        // else if use
int main()
{
    int age;
    printf("enter the age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("adult\n");
    }
    else if (age >= 13 && age < 18)
    {
        printf("teenage\n");
    }
    else 
    {
        printf("child\n");
    }
    return 0;
}