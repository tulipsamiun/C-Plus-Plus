#include <stdio.h>
#include <conio.h>

using namespace std;

float p[30], u, w[30],  z[30], temp, x[20], w1[30];

int m,n,i,j, min;
void greedy(){
    for(i=0; i<n; i++)
        x[i] = 0.0;
        u = m;
        for(i=0; i < n; i++){
            if(w[i] > u)
            break;
            x[i] =1.0;
            u= u-w[i];
        }
    if(i<=n){
        x[i] = u/w[i];
    }
}

void select(){
    for(i = 0; i < n ; i++)
        z[i] = p[i]/ w[i];
        for(i  = 0 ; i< n; i++){
            min = i;
            for(j = i +1; j < n; j++)
                if(z[j] > z[min])
                    min = j;
                    temp = z[i];
                    z[i] = z[min];
                    z[min] =temp;
                    
                    temp= w[i];
                    w[i] = w[min];
                    w[min] = temp;
        }
}

int main()
{
      printf("Enter No = ");
      scanf("%d", &n);
      printf("Size of Knapsack = ");
      scanf("%d", &m);
      printf("Enter Profits =");
      for(i = 0; i < n; i++ ){
          scanf("%f", &p[i]);
      }
      printf("Enter Weights =");
      for(i = 0; i < n; i++ ){
          scanf("%f", &w[i]);
      }
      select();
      greedy();
      printf("Result =");
      for(i = 0; i < n; i++ ){
          printf("%f", x[i]);
      };
      return 0;
}
