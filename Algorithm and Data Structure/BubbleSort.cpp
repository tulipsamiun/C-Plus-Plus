#include <iostream>
#include<time.h>

using namespace std;

int main()
{
    int i, j, n, a[11], temp;
    clock_t start, end;
    printf("Enter Value For N = ");
    scanf("%d", &n);
    printf("Enter Your Number = ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    start = clock();
    for(i = 0; i < n; i++){
        for(j = n-1; j >= 1; j--){
            if(a[j] < a[j-1]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    end = clock();
    for( i = 0;i < n; i++){
        printf("\t%d", a[i]);
    }
    printf("\nThe Time is = %ld", (end - start));
    return 0;
}
