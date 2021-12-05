#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int dec = 0, i = 0, n;
    string bin;
    printf("Enter Number = ");
    getline(cin, bin);
    n = bin.size();
    n = n - 1;
    for (i = n ; i >= 0; i--){
       dec = dec + ((bin[i]- 48) * pow(2,n-i));
    }
    printf("Decimal = %d",dec);
    return 0;
}
