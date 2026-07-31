/* Finding the area of a triangle */

#include <stdio.h>

int main(){
    float height, base ,area;
    printf("\nEnter the base of the triangle");
    scanf("%f",&base);
    printf("\nEnter the height of the triangle");
    scanf("%f",&height);
    area=height*base*0.5;
    printf("\nArea of the triangle = %f",area);
    return 0;
}