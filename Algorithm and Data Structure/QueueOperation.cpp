#include <iostream>
#define size 7

using namespace std;

int q[size], front = 0, rear = 0 , num = 0;

//innitializing the queue>
void enq(){
    printf("%d", front);
    if(rear + 1 == front || (rear + 1 == size && !front)){
        printf("\nThe Queue is Full");
    }
    else{
        rear = (rear + 1) %size;
        q[rear] = num;
    }
}

int deq(){
    if(rear == front)
        printf("\nNo More Value To Retrive");
    else{
        front = (front +1) % size;
        q[front] = 0;
        }
        return front;
}
//this will show the situation after pop/ psush

void display(){
    int i;
    for(i =0 ;i< size; i++)
        printf("[%4d]\t",q[i]);
        for(i= 0; i < size;i++){
            printf("\nFront  = %d, Rear = %d", front, rear);
            break;
        }
    
}
//this is the main program for implementing the Queue
int main(){
    char ch;
    do{
        printf("\n1.ENQUE\n2.DEQUE\n3.EXIT");
        switch(ch = getchar()){
            case '1' : printf("Enter a Nubmer in Queue ");
                       scanf("%d", &num);
                       enq();
                       display();
                       break;
            case '2' : deq();
                       printf("After Poping ");
                       display();
                       break;
            case '3' : exit(0);
            default : printf("Wrong Choice. Please the Main Menu Carefully");
        }
    }while(ch !='3');
    return 0;
}
