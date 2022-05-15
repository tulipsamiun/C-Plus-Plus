#include <iostream>

using namespace std;

int main()
{
    int num, rem;
    printf("Enter Number = ");
    scanf("%d", &num);
    rem = num % 2;
    if( rem == 0 )
        printf("Even");
    else printf("Odd");
    return 0;
}
