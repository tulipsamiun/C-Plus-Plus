/******************************************************************************
#include<iostream>
#include <stdio.h>
#include<string.h>
#include<bits/stdc++.h> 
using namespace std;

bool isStringRotation(string s, string s1){
    if(s.length() == s1.length() && s.length()>0){
        string ss=s+s;
        return (ss.find(s1) != string::npos);
    }
    
    return false;     

}

int main()
{
    string s,s1;
    //printf("Hello World");
    printf("Enter String");
    getline(cin,s);
    printf("Enter another String");
    getline(cin,s1);
    
    if(isStringRotation(s,s1)){
        cout<<"String Rotation of each other";
    }
    else{
        cout<<"Not String Rotation";
    }
    
    return 0;
}


