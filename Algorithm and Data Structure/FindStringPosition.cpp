#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i, n, count;
    char x[20][20], name[20];
    printf("Enter No of Strings ");
    scanf("%d", &n);
    printf("Enter The Strings ");
    for(i = 0;i < n; i++){
        scanf("\n%s", x[i]);
    }
    printf("Enter The String You Want To Search = ");
    scanf("%s", name);
    for(i =0; i < n; i++){
        if(strcmp (x[i], name) == 0){
            printf("The String Is At Position %d", i+1);
            count ++;
        }
    }
    if(count == 0){
        printf("The String Is Not Found");
    }
    return 0;
}
