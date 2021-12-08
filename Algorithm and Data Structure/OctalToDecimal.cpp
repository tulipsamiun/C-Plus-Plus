#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int dec =0 , n, i;
    string oct;
    printf("enter Number");
    getline(cin,oct);
    n = oct.size();
    n = n-1;
    for (i = n; i >= 0; i--){
        dec = dec + ((oct[i]-48) * pow(8,n-i));
    }
    printf("Decimal = %d", dec);
    return 0;
}
