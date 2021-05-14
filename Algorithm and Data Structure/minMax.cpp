#include<iostream>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
//   Hakerrank: Practice: Interview Preparation: KitGreedy AlgorithmsMax Min

int minMax(int k,vector<int> a ){
    sort(a.begin(),a.end());
    int n = a.size();
    int minMax = a[n-1];
    int i = 0;
    while( i <= n - k){
        int tempMax = a[k+i-1]-a[i];
        if(tempMax < minMax){
            minMax = tempMax;
        }
        i++;
    }
    return minMax;
}


int main()
{
    int n;
    printf("Enter Element No");
    cin>>n;
    printf("Enter Element Value");
    vector<int> a(n);
    int l;
    
    for( int i = 0; i < n; i++ ){
        cin>>l;
        a[i]=l;
    }
    
    printf("Subarray Length");
    int k;
    cin >>k;
    int c=minMax(k,a);
    cout<<c;
    return 0;
}
