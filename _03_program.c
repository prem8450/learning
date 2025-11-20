#include <stdio.h>

int main()
{
    int r, h;
    float PI = 3.14, volume;
    printf("enter the value of r and h");
    scanf("%d  %d" , &r , &h);

    volume = PI * r * r * h;
    printf("%f" , volume);

    return 0;

}