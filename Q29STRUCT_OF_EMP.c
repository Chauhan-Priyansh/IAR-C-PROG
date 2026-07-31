#include <stdio.h>

struct employee{
    int empid;
    int deptid;
    float salary;

}; 

int main(){
    struct employee emp[2];
    int i;
    for(i=0;i<2;i++){
        printf("Enter Employee %d Details \n",i);

        printf("Employee ID: ");
        scanf("%d",&emp[i].empid);

        printf("Department ID: ");
        scanf("%d",&emp[i].deptid);

        printf("Salary: ");
        scanf("%f",&emp[i].salary);
    }
    printf("Emp Details");
    for(i=0;i<2;i++)
    {
        printf("Employee %d\n",i+1);
        printf("EmpID %d\n",emp[i].empid);
        printf("Department %d\n",emp[i].deptid);
        printf("Salary %f\n",emp[i].salary);


    }
    return 0;
}