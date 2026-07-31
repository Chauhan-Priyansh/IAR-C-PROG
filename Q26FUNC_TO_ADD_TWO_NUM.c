#include <stdio.h>


int add(int a , int b){
    return a+b;
}
int main(){
    int num1,num2;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("Sum= %d\n",add(num1,num2));
    return 0;
}