#include <stdio.h>

int main(){
    int n ,i;
    long long t1=0,t2=1,next;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("Fibonacci Series (%d terms)",n);
    for (i=1;i<=n;i++) {
        next=t1+t2;
        printf("\n%lld",next);
        t1=t2;
        t2=next;  
        
    }
    return 0;
}