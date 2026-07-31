#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(isupper(ch))
        printf("%c is a Captial letter. \n",ch);
    else if(islower(ch))
        printf("%c is a Lowercase letter \n",ch);
    else if(isdigit(ch))
        printf("%c is a digit \n",ch);
    else
        printf("'%c' is a special character. \n",ch);
    return 0;
}