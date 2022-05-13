#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World";
    int B[50][50], A[50][50], C[50][50], r, c, r2, c2, i, j, k, P, Q, R, S,T, U, V;
    printf("How Many Rows =");
    scanf("%d" ,  &r);
    printf("How Many Columns = ");
    scanf("%d", &c);
    for(i = 0; i < r ; i++){
        for(j =0; j < c; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Hpw Many Rows for The 2nd Matricx = ");
    scanf("%d", &r2);
    if(c != r2){
        printf("Error Input");
        getchar();
        exit(0);
    }
    printf("How Many Columns = ");
    scanf("%d", &c2);
    for(i = 0; i < r2; i++){
        for(j =0; j < c2; j++){
            printf("B[%d][%d] = " , i,j);
            scanf("%d", &B[i][j]);
        }
    }
    P =  (A[0][0] + A[1][1]) *(B[0][0] + B[1][1]);
    Q = B[0][0] * (A[1][0] + A[1][1]);
    R = A[0][0] * (B[0][1] - B[1][1]);
    S = A[1][1] * (B[1][0] - B[0][0]);
    T = B[1][1] * (A[0][0] + A[0][1]);
    U = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    V = (B[1][0] + B[1][1]) * (A[0][1] - A[1][1]);
    C[0][0] = P + S -T + V;
    C[0][1] = R + T;
    C[1][0] = Q + S; 
    C[1][1] = P + R - Q + U;
    for(i = 0; i< r2; i++){
        for( j =0; j < c2; j++){
            printf("\t%d" , C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/* Example
MULTIPLIES A and B =============
 using Strassen's method
   A = [1  3]      B = [6  8]
       [7  5]          [4  2]
     
 C = A * B = ?
 =================================*/
 /* RESULT: =================
     C = [ 18   14]
         [ 62   66]
=========================*/
