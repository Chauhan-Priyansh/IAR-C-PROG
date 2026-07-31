#include <stdio.h>

int main(){
    int arr[100];
    int n,i,sum=0;
    float average;
    printf("Enter the number of elements:  ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the elements %d: ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    average=(float)sum/n;
    printf("Sum = %d\n",sum);
    printf("Average= %.2f\n",average);
    return 0;
}