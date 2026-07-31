/*Finding the simple interest using i=(p*r*n)/100*/
#include <stdio.h>

int main(){
    float p,r,t,si;
    printf("\nEnter the principal amount (p): ");
    scanf("%f",&p);
    printf("\nEnter the rate of interest (r): ");
    scanf("%f",&r);
    printf("\n Enter time in years(t): ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple Interest = %2.f\n",si);
    return 0;
}