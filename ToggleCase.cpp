#include <iostream>

using namespace std;

int count, tag;
char c, text[20];

int main()
{
    printf("%s", "Enter A Line Of Text Bellow : ");
    for(count = 0; (text[count] =  getchar()) != '\n'; ++count){
    tag = count;
    printf("%d", tag);
    }
    for(count = 0; count <= tag; ++count )
    {
    c =  islower(text[count])? toupper(text[count]): tolower(text[count]);
    putchar(c);
    }
    return 0;
}
