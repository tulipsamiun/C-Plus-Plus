#include <iostream>

using namespace std;


int main()
{
    int i,q, reminder, num, flag, oct[10];
    printf("Enter Number = ");
    scanf("%d", &num);
    for(i = 0 ; i < 10; i++){
        reminder = num % 8;
        oct[i] = reminder;
        q = num/8;
        num = q;
        flag = i;
        if(q == 0) break;
    }
    for(i = flag;i >= 0; i--){
        printf("%d", oct[i]);
    }

    return 0;
}
