#include <stdio.h>
#include <string.h>
int main(){
    char str1[50],str2[50];
    printf("Enter first string:  ");
    scanf("%s",str1);

    printf("Enter Second string:  ");
    scanf("%s",str2);

    printf("Length of first string = %zu\n",strlen(str1));
    printf("Copied String = %s\n",strcpy(str2,str1));
    printf("Concatenated String= %s\n",strcat(str1,str2));
    printf("Comparison = %d\n",strcmp(str1,str2));

    return 0;
}