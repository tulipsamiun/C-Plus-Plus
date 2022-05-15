#include <stdio.h>

int main()
{
    int marks;
    printf("Enter Marks = ");
    scanf("%d", &marks);
    if(marks <= 100 && marks >= 90)
        printf("A");
    else if(marks <= 89 && marks >= 80)
        printf("B");
    else if(marks <= 79 && marks >= 70)
        printf("C");
    else if(marks <= 69 && marks >=60)
        printf("D");
    else if(marks <= 59 && marks >=0 )
        printf("F");
    else if(marks < 0  || marks > 100)
        printf("Invalid No.");
    return 0;
}
