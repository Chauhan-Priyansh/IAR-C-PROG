#include <stdio.h>

int main(){
    int num,i;
    long long Factorial =1; //long long is a datatype for number that exceed the limit of int datatype
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num<0){
        printf("Factorial is not for Negative Number");}
    else{
        for(i=1;i<=num;i++)
            Factorial=Factorial*i;
        printf("Factorial is %lld\n",Factorial);
    
    }
    return 0;
}