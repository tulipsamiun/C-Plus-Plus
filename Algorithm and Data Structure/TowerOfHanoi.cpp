#include <stdio.h>
#include <conio.h>

void transfer(int n, int from, int to, int center){
    if(n > 0 ) {
        transfer(n-1, from, center, to);
        printf("%d",n);
        printf("\n%d %c -> %c", n, from, to);
        transfer(n-1, center, to, from);
    }
    return;
}

int main()
{
    int n;
    printf("Enter NO of disk = ");
    scanf("%d", &n);
    transfer(n, 'L', 'R', 'C');
    return 0;
}
