#include <iostream>

using namespace std;

int main()
{
    int i, j, n, element[20],temp;
    printf("How Many Elements Do you Want to Enter ");
    scanf("%d",&n);
    printf("Enter ELements = ");
    for(i = 0; i < n; i++){
        scanf("%d", &element[i]);
    }
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(element[i]  > element[j]){
                temp =  element[j];
                element[j] = element[i];
                element[i] =  temp;
            }          
        }
    }
    printf("Rechorded List Of Numbers = ");
    for( i= 0;i < n; i++){
        printf("%d ", element[i]);
    }
    return 0;
}
