#include<iostream>
#include <stdio.h>
#define n 4
using namespace std;

void  display(int a[n][n]){
    for(int i = 0;i < n; i++){
         for(int j = 0; j < n; j++){
            printf("%d",a[i][j]);
            cout<<"\t";
        }
        cout<<"\n";
    }
}
void rotateMatrix(int a[n][n]){
    int lenght = n;//a.length();
    for(int layer = 0; layer < n/2; layer++){
        int first = layer;
        int last = n - 1 - layer;
        for(int i = first; i < last; i++){
            int ofset = i-first;
            int top= a[first][i];
            a[first][i] = a[i][last];
            a[i][last]= a[last][last-ofset];
            a[last][last-ofset]=a[last-ofset][first];
            a[last-ofset][first]=top;
        }        
    }
}
int main()
{
    printf("Enrer matrix x");
    cout<<"Enter matrix values";
    int k, a[n][n];
    
    for(int i = 0; i < n; i++){
         for(int j = 0; j< n; j++){
        cin >> k;
        a[i][j] = k;
        }
    }
    display(a);
    rotateMatrix(a);    
    cout<<"\n";
    display(a);

    return 0;
}
