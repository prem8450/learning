// program to print factorial of number using while loop

#include <stdio.h>

int main()
{
    int fact = 1;
    int i = 1;

    while (i <= 6)
    {
        fact *= i;
        i++;
    }
    printf("%d" , fact);
    return 0;
    
}