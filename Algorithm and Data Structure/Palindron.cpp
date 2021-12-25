#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, n, flag = 0;;
    char text[20];
    printf("Enter Text = ");
    cin >> text;
    n = strlen(text);
    for( i= 0; i < n/2 ; i++){
        if(text[i] != text[n -1 -i])
        flag = 1;
        n =  n --;
    }
    if(flag == 1){
        printf("This is Not A Palindrom");    
    }
    else if(flag == 0){
        printf("This is Palindrom");
    }
    return 0;
}
