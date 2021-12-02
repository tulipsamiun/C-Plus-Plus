#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 1, b = 1, sum = 0, n ;
    printf("Enter value for n ");
    scanf("%d", &n);
    printf("%d", a);
    while (b <= n ) {
        printf("\n%d", b);
        sum = a + b;
        a = b;
        b = sum; 
    }
    return 0;
}
