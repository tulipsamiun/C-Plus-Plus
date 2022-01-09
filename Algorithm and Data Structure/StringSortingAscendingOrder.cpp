#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i, j, n;
    char x[10][10], temp[10];
    printf("Enter No Of Strings = ");
    scanf("%d", &n);
    printf("\nEnter The String");
    for( i = 0; i < n; i++){
        scanf("%s", x[i]);
    }
    for(i = 0 ; i < n; i++){
        for(j = i + 1 ; j < n ; j++){
            if((strcmp(x[i], x[j])) > 0){
                strcpy(temp, x[i]);
                strcpy(x[i], x[j]);
                strcpy(x[j], temp);
            }
        }
    }
    for( i = 0; i < n; i++){
        printf("\n%s", x[i]);
    }
    
    return 0;
}
