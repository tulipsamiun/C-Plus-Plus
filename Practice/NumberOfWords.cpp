#include <iostream>

using namespace std;

int main()
{
    string text;
    int i, count =1;
    printf("Enter Text = ");
    getline(cin, text);
    for(i= 0 ; i < text.size(); i++){
        if(text[i] == ' ')
        count++;
    }
    printf("Number of Words = %d", count);
    return 0;
}
