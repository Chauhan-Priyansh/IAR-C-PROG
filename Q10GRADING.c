/*
MARKS               GRADE
100-80              DISTINCTION

79-60               First Class

59-40               Second Class
<40                 FAIL

*/

#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks:  ");
    scanf("%d",&marks);
    if(marks>100 || marks<0)
        printf("Invalid Marks\n");
    else if(marks>=80)
        printf("Grade : Distinction\n");
    else if (marks >=60)
        printf("Grade : First Class\n");
    else if(marks >=40)
        printf("Grade : Second Class\n");
    else    
        printf("Fail\n");
    return 0;
}