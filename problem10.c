#include<stdio.h>
        // ternoy oprater, two codition are chack to be use
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    age >= 18 ? printf("adult\n") : printf("not adult\n");
    
    return 0;
}