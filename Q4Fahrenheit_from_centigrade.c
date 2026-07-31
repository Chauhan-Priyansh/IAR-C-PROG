/* f=1.8*c+32*/
#include <stdio.h>

int main(){
    float c,f;
    printf("Enter the temperature in centigrade :  ");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("The Fahrenheit of the given C is : %.2f",f);
    return 0;
}