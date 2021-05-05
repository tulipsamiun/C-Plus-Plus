#include<iostream>
#include <stdio.h>
#include<string>
using namespace std;

bool isUniqueChar(string s){
    if(s.length() > 128)
    return false;
    bool chr_set[128] = {0};
    for(int i = 0; i < s.length(); i++){
        int a = s[i];
        if(chr_set[a])
        {
            return false;
        }
        chr_set[a] = 1;
    }
    return true;
}
int main()
{
    string s;
    printf("Insert string:  ");
    getline(cin,s);
    bool pmr = isUniqueChar(s);
    if(pmr){
    cout << "True "<<pmr;
    }
    else
    cout << "False " << pmr;    
    return 0;    
}
