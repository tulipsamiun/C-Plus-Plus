#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char element[20],temp;
    int i, j,n;
    printf("How Many Element Do You Want To Enter ? ");
    scanf("%d", &n);
    printf("Enter character = ");
    for(i = 0; i < n ; i++){
        scanf("%s", &element[i]);
    }
    for( i = 0; i < n; i++){
        for(j = i + 1 ; j < n ; j++){
           if(toupper(element[i]) > toupper(element[j])){
               temp = element[j];
               element[j] = element[i];
               element[i] = temp;
           } 
        }
    }
    printf("\nRechorded List Of Character");
    for(i = 0; i < n ; i++){
        printf("\n%c", element[i]);
    }
    return 0;
}
