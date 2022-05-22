#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
    int n;
    float x, y;
    printf("Enter Value For x = ");
    scanf("%f", &x);
    printf("Enter Value For n = ");
    scanf("%d", &n);
    y = pow(x,n);
    printf("%f", y);
    return 0;
}
