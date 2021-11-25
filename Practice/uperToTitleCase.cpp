#include <iostream>

using namespace std;

int main()
{
    string text;
    int i,n;
    printf("Enter Uper Case Character : ");
    getline(cin,text);
    n = text.size();
    text[0] = toupper(text[0]);
    for( i = 1 ; i < n; i++ ){
        if(text[i-1] == ' '){
            text[i] = toupper(text[i]);
        }
        else 
            text[i] = tolower(text[i]);
    }
    cout << text;
    return 0;
}
