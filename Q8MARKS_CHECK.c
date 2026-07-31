#include <stdio.h>

int main(){
    float marks;
    printf("\nEnter the marks obtained: ");
    scanf("%f",&marks);

    if (marks>=40)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");
    return 0;
}