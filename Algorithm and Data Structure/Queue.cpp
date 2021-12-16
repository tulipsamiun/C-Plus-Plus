#include <iostream>

using namespace std;

int queue[20], i,n;

void input(){
    printf("Enter Number of elements = ");
    scanf("%d", &n);
    printf("Enter Element = ");
    for(i= 0; i< n; i++){
        scanf("%d", &queue[i]);
    }
}
void add(){
    int nn;
    printf("How Many Element Do You Want To Add = ");
    scanf("%d", &nn);
    printf("Enter Elements = ");
    for(i = n ;i < n+nn; i++){
        scanf("%d", &queue[i]);
    }
    n = n + nn;
}
void removeItem(){
    int nn;
    printf("How many Elemnts Do You Wnat To Remove  = ");
    scanf("%d", &nn);
    for(i = 0; i < n-nn; i++){
        queue[i] = queue[i + nn];
    }
    n = n - nn;
}
void display(){
    for(i = 0; i <n; i++){
        printf("\nElement %d is at Position %d", queue[i], i+1);
    }
    getchar();
}

int  main()
{
    char choice;
    printf("\n1.First Input\n2.Second Element\n3.Remove Element\n4.Display\n5.Exit\n\nEnter Choice");
    do{
        switch(choice= getchar()){
            case '1': input();
                      break;
            case '2': add();
                      break;
            case '3': removeItem();
                      break;
            case '4': display();
                      break;    
            case '5': exit(0);
            default: printf("Wrong Entry");
        }
    }while(1);
}
