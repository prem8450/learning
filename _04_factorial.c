#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    int fact= 1;
    printf("enter the value of n");
    scanf("%d" , &n);
    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("factorial of %d = %d" , n , fact);
    return 0;

}