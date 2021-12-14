#include <iostream>

using namespace std;

int main()
{
    int a[2][2], b[2][2], total[2][2], i, j;
    printf("Enter Value for Matrix a and b");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++ ){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i< 2; i++){
        for(j= 0; j < 2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i <2; i++){
        for(j=0; j < 2; j++){
            total[i][j] =  a[i][j] + b[i][j];
            printf("%d ", total[i][j]);
 
        }
        printf("\n");
        
    }
    return 0;
}
