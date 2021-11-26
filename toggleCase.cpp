#include <iostream>

using namespace std;

int main()
{
    int i, n;
    string text;
    printf("Ente the string : ");
    getline(cin,text);
    for (i = 0; i < n; i++ ) {
        if ( i%2 == 0)
            text[i] = toupper(text[i]);
        else
            text[i] = tolower(text[i]);
    }
    cout << text;
    return 0;
}
