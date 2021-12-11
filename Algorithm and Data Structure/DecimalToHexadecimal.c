#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int i, num,  hexa[100], reminder, flag, q;
    printf("Enter Decimal Number = ");
    scanf("%d", &num);
    for (i = 0; i < 100; i++){
        reminder  = num % 16;
        hexa[i] = reminder;
        q = num / 16;
        num = q;
        flag = i;
        if (q == 0 ) break;
    }
    printf("Hexa Decimal Equivalent = ");
    for(i = flag; i >= 0; i--){
        printf("%X", hexa[i]);
    }
    getch();
}
