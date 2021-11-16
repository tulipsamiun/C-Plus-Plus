#include <iostream>

using namespace std;

int main()
{
   string text;
   int i;
   printf("Enter String");
   getline(cin,text);
   for( i = 0; i < text.size();i ++){
       text[i] =  toupper(text[i]);
   }
   cout << text;
   return 0;
    
}
