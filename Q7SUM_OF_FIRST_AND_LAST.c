#include <stdio.h>

int main(){
    int num,fdigit,ldigit,sum;
    printf("Enter the number");
    scanf("%d",&num);
    ldigit=num%10;
    while(num>=10){
        num=num/10;
    }
    fdigit=num;
    sum=fdigit+ldigit;
    printf("Sum of first and last digit =%d\n",sum);
    
    return 0;
}