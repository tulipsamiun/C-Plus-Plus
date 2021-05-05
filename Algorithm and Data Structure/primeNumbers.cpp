/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<math.h>

//include <stdio.h>
int main()
{
    //printf("Hello World");
    int n;
    printf("Enter Value for n");
    scanf("%d",&n);
    int primes[n+1];
    for(int i=0;i<n;i++){
        primes[i]=1;
    }
    primes[0]=0;
    primes[1]=0;
    for(int i=2; i<=sqrt(n);i++){
        if(primes[i]==1)
        {
            for(int j=2;i*j<=n;j++){
            primes[i*j]=0;
            }
        }
    }
    printf("Primes ");
    for(int i=2; i<=n;i++){
     if(primes[i]==1)
        printf("%d ",i);
    }
    return 0;
}



/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<math.h>

//include <stdio.h>
int main()
{
    int n;
    printf("Enter Value for n");
    scanf("%d",&n);
    int primes[n+1];
    for(int i=0;i<n;i++){
        primes[i]=1;
    }
    primes[0]=0;
    primes[1]=0;
    for(int i=2; i<=sqrt(n);i++){
        if(primes[i]==1)
        {
            for(int j=2;i*j<=n;j++){
            primes[i*j]=0;
            }
        }
    }
    printf("Primes ");
    for(int i=2; i<=n;i++){
     if(primes[i]==1)
        printf("%d ",i);
    }
    return 0;
}



