#include <iostream>

using namespace std;

int i;
void input(int a[], int n){
    for(i =0; i < n; i++){
        scanf("%d", &a[i]);
    }
}
int seq_search(int a[], int n, int x){
    for(i =0 ; i <  n; i++){
        if(a[i] == x)
        return i;
    }
    return -1;
}
int main()
{
    int a[100], n, x, pos;
    printf("How Many Numbers:");
    scanf("%d", &n);
    input(a, n);
    printf("Enter Item To Be Search");
    scanf("%d", &x);
    pos = seq_search(a, n, x);
    if( pos == 1)
        printf("Item Not Found");
    else 
        printf("Item Found at Position %d", pos);
    return 0;
}
