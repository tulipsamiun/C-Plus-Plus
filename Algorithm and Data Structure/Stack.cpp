#include <iostream>

using namespace std;
int i, n, stack[20];


void input(){
    printf("Enter The Number of Element = ");
    scanf("%d", &n);
    for (i = 0 ; i < n ; i++){
        scanf("%d", &stack[i]);
    }
}
void addElement(){
    int nn;
    printf("How Many Elements Do You Want To Add = ");
    scanf("%d", &nn);
    printf("Enter Elements ");
    for(i = n; i < n+nn; i++){
        scanf("%d", &stack[i]);
    }
    n = n + nn;
}
void removeElement(){
    int nn;
    printf("Enter Number of Elements To Remove = ");
    scanf("%d", &nn);
    n = n - nn;
}
void display(){
    for(i = 0; i < n; i ++){
        printf("Element %d at Position %d \n", stack[i], i+1);
    }
    getchar();
}
int main()
{
    char choice;
    do {
        printf("1. First Input \n2. Add Element \n3. Remove Element\n4. Display\n5. Exit\nEnter  your Choice ");
        switch(choice = getchar()) {
            case '1' :  input();
                        break;
            case '2' :  addElement();
                        break;
            case '3' :  removeElement();
                        break;
            case '4' :  display();
                        break;
            case '5' :  exit(0);
            default  :  printf("Wrong Entry");
        }
    } while(1);
    return 0;
}
