#include <stdio.h>

int main(){
    int count ,i;
    float number ,sum=0,average;
    printf("Number of Iterations: ");
    scanf("%d",&count);
    for(i=1;i<=count;i++){
        printf("Enter the number %d ",i);
        scanf("%f",&number);
        sum+=number;
    }
    average=sum/count;
    printf("Sum = %.2f\n",sum);
    printf("Average = %.2f\n",average);

    return 0;
}