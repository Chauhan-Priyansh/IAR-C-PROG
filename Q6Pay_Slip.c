#include <stdio.h>

int main(){
    float da,basic,hra,ma=300,pf,Gross,net;
    printf("Enter the basic Salary");
    scanf("%f",&basic);
    da=0.10*basic;
    hra=0.075*basic;
    pf=0.125*basic;
    Gross=basic+da+hra+ma;
    net=Gross-pf;
    printf("\n PAY SLIP \n");
    printf("Basic : %.2f\n",basic);
    printf("HRA : %.2f\n",hra);
    printf("MA : %.2f\n",ma);
    printf("GROSS : %.2f\n",Gross);
    printf("PF : %.2f\n",pf);
    printf("Net Pay : %.2f\n",net);
    return 0;
}