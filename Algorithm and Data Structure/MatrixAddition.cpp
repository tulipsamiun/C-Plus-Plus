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
        }
        printf("\n");
        
    }
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d ", a[i][j]); 

        } 
        if(i == 0) printf("\t+\t");
        else printf("\t \t");
        for (j = 0; j < 2; j++){
            printf("%d ", b[i][j]);
        }
        if (i == 0) printf("\t=\t");
        else printf("\t \t");
        for (j = 0; j < 2; j++){
            printf("%d ", total[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
