#include <stdio.h>

int main()
{
    int i, n;
    long long fact = 1;

    printf("enter a number:");
    scanf("%d", &n);

    if(n<0)
           printf("the factorial of negative number does not exist: ");
    else
        { 
        for (int i = 1; i <= n;  i++)
             fact = fact * i;        
        }
        printf("factorial of %d = %lld" , n, fact);
     return 0;   
               
}