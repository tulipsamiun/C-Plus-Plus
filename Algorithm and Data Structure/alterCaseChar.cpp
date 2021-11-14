#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    int i, n;
    string text;
    printf("Enter The String =");
    getline(cin, text);
    n = text.size();
    for( i=0; i <n; i+=2){
        text[i] = toupper(text[i]);
    }
    cout << text;
    return 0;
}
