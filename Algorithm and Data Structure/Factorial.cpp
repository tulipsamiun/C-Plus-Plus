#include <stdio.h>
#include <conio.h>

int fact1(int n){
 if (n == 0 ) return 1;
 else if (n < 0 ) return-1;
 else
 return (n * fact1(n-1));
}

int main()
{
    int n, fact;
    printf("Enter Value For n = ");
    scanf("%d", &n);
    fact =  fact1(n);
    if (fact == -1) 
        printf("Factorial of a negative number does not exists");
    else
        printf("Factorial = %d", fact);
    return 0;
}
