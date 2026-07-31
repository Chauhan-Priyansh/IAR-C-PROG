/* Swapping Numbers*/

#include <stdio.h>

int main(){
    int temp,a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("Before swap a=%d  b=%d\n",a,b);

    temp=a;
    a=b;
    b=temp;
    printf("After swap a=%d  b=%d\n",a,b);
    return 0;
}