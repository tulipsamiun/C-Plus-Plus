#include <iostream>
#define max 10

int i, j, n, minim, a[max], temp;

using namespace std;

void select(){
    for(i =0; i < n-1; i++){
        minim = i;
        for(j = i+1; j<n ; j++)
            if(a[j] < a[minim])
                minim = j;
                temp = a[i];
                a[i] =a[minim];
                a[minim] = temp;
    }
}
int main()
{
    printf("\n How Many No = ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    select();
    for(i = 0; i < n; i++) {
        printf("\t%d", a[i]);
    }
    return 0;
}
