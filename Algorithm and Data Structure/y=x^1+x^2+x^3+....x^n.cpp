#include <iostream>
#include  <math.h>

using namespace std;

int i, n;
float y=0, x;

int main()
{
    printf("Enter Value For x = ");
    scanf("%f", &x);
    printf("Enter Value For n = ");
    scanf("%d", &n);
    for(i = 0; i <=n ; i++){
        y = y + pow(x, i);
    }
    printf("%f", y);
    return 0;
}
