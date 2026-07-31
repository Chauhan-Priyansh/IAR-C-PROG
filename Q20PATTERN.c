#include <stdio.h>

int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern B:\n");

    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");
    printf("Pattern C:\n");
    for(i=5;i>=1;i--){
        for(j=0;j<i;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }




    return 0;
}