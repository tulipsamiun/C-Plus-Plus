#include <iostream>
#define max 5

using namespace std;

int top = 0,  item = 0, stack[max];

    void menu(void){
        printf("\n1.PUSH\n2.POP\n3.EXIT\n");
    }
    void output(void){
        int count;
        for(count = 1; count <= top; count++){
            printf("%4d", stack[count]);
        }
    }
    void push(void){
        if(top == max)
            printf("Stack Is Full");
        else 
            stack[++top] = item;
    }
    int pop(void){
        if(top < 1)
            printf("Stack Empty");
        else 
            top--;
        return stack[top];
    }
int main()
{
    char choice;
    do{
        menu();
        switch(choice = getchar()){
            case '1' : printf("\nPush a Value Into The Stack\n");
                       scanf("%d", &item);
                       push();
                       output();
                       break;
            case '2' : pop();
                       output();
                       break;
            default: printf("Invalid Chice....Try Again");
        } 
    }while(choice != '3');
    return 0;
}
