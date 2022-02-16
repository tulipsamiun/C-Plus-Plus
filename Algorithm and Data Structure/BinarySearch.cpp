#include <iostream>

using namespace std;

int i;
void input(int a[], int n){
    for(i =1 ; i <=n;i++)
        scanf("%d", &a[i]);
}

int bin_search(int a[], int n, int x){
    int l, h, m;
    l =1 ;
    h =n;
    while( l <= h){
        m =(l+h)/2;
        if(a[m] == x)
            return m;
        else if(a[m] > x)
            h = m - 1;
        else 
            l = m + 1;
    }
    return -1;
}

int main(){
    int a[100], n, x, pos;
    printf("How Many Numbers ");
    scanf("%d",  &n);
    input(a,n);
    printf("Enter Item To be Searched = ");
    scanf("%d", &x);
    pos = bin_search(a, n, x);
    if( pos == - 1){
        printf("Item Not Found");
        return 0;
    }
    else {
        printf("Item Found At %d", pos);
        return 0;
    }
}
