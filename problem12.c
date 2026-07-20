#include<stdio.h>

int main()
{
    char ch;
    printf("enter the letter :");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("UPPER CASE");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("LOWER CASE");
    }
    else
    {
        printf("not english letter ");
    }
    
    return 0;
}