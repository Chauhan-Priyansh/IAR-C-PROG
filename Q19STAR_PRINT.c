#include <stdio.h>

int main(){
    int n=5,i,j;
    printf("Pattern a: \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
            printf("*");
        
        }printf("\n");
    }

    printf("Pattern b:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }

    printf("Pattern c:\n");
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}

