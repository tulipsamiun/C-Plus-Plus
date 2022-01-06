#include <iostream>

using namespace std;

int main()
{
    int i, j, n;
    char element[20], temp;
    printf("How Many Character You Want To Enter = ");
    scanf("%d", &n);
    printf("Enter Elements = ");
    for(i = 0; i < n ; i ++){
        scanf("%s", &element[i]);
    }
    for(i =0; i < n ;i++){
        for(j= i+1; j < n; j++){
            if(toupper(element[i]) < toupper(element[j])){
                temp = element[j];
                element[j] = element[i];
                element[i] =  temp;
            }
        }
    }
    printf("Rechorded List of Character = ");
    for(i =0 ;i < n; i++){
        printf("\n%c", element[i]);
    }
    

    return 0;
}
