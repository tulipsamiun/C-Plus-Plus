#include <iostream>

using namespace std;

int x[20][20],y[20][20], z[20][20], i, j, k,r,c, r2, c2;

int main()
{
    printf("Enter row, column = ");
    scanf("%d %d", &r,&c);
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){        
            printf("Enter Value For x [%d][%d]",i,j);
            cin>>x[i][j];
            }
    }
    printf("Enter row, column for 2nd matricx = ");
    scanf("%d %d", &r2,&c2);
    if(c != r2){
        printf("Error in Input = ");
        getchar();
        exit(0);
    }
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            printf("Enter Value For y [%d][%d]",i,j);
            scanf("%d", &y[i][j]);
        }
    }
    for(i = 0; i < r; i++){
        for(j = 0; j < c2; j++){
            z[i][j] = 0;
            for(k = 0; k < r2; k++){
                z[i][j] = z[i][j] + x[i][k] * y[k][j]; 
            }
        }
    }
    for(i=0; i < r; i++){
        for(j =0; j < c2; j++){
            printf("\t%d", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}

