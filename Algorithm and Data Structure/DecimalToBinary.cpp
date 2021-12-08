#include <iostream>
using namespace std;
int main()
{
    int i , q, num, flag, reminder; 
    string bin;
    printf("Enter Decimal Number= ");
    scanf("%d", &num);
    for (i = 0 ; i < 10; i++){
        reminder = num %2;
        bin[i] =  reminder;
        q = num /  2;
        flag = i ;
        num = q;
        if ( q == 0)
            break;
        }
        for (i = flag; i >= 0; i--){
            printf("%d",bin[i]);
        }
        return 0;
}
