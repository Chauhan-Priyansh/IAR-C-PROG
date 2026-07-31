#include <stdio.h>

int main(){
    int num1,num2,num3,max;
    printf("Enter 1st Number: ");
    scanf("%d",&num1);
    printf("Enter 2nd Number: ");
    scanf("%d",&num2);
    printf("Enter 3rd Number: ");
    scanf("%d",&num3);

    if(num1>=num2){
        if(num1>=num3){
            max=num1;
        }
        else{
            max=num3;
        }
    } 
    else{
        if(num2>=num3){
            max=num2;

        } 
        else{
            max=num3;
        }
    }
    printf("Maximum Number %d",max);
        

    return 0;
}