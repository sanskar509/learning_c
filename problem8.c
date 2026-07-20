#include<stdio.h>
        //use of if else
int main()
{
    int age;
    printf("enter the age : ");
    scanf("%d", &age);

    if (age > 18 )
    {
        printf("adult \n");
    }
    else
    {
        printf("not adult \n");
    }
    
    return 0;
}