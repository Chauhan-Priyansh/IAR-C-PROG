#include <stdio.h>

int main(){
    int num =10;
    int *ptr;
    ptr=&num;
    printf("Value = %d\n",num);
    printf("Address = %p\n",ptr);
    printf("Value using pointer = %d\n", *ptr);
    
    return 0;
}