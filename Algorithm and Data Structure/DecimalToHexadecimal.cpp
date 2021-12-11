#include <iostream>

using namespace std;

int main()
{
    int i, num, hexa[100], reminder, q, flag;
    printf("Enter Decimal Number = ");
    scanf("%d", &num);
    for (i = 0; i < 100; i++){
        reminder = num % 16;
        hexa[i] = reminder;
        q = num / 16;
        num =q;
        flag = i;
        if(q == 0) break;
    }
    printf("HExadecimal Equivalent = ");
    for(i= flag; i >= 0; i--){
        printf("%X", hexa[i]);
    }
    return 0;
}
