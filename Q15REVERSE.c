#include <stdio.h>

int main(){
    long number ,reversed=0,remainder,original;
    printf("Enter a number:  ");
    scanf("%ld",&number);

    original=number;
    while(number!=0){
        remainder=number%10;
        reversed=reversed*10+remainder;
        number=number/10;

    }
    printf("Reversed of %ld is %ld\n",original,reversed);
    return 0;
}