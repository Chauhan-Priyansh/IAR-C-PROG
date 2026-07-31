#include <stdio.h>

struct Player{
    char name[50];
    float average;
};

int main(){
    struct Player p[2];
    int i;
    for(i=0;i<2;i++){
        printf("Enter the player Name: ");
        scanf("%s",p[i].name);
        printf("Enter Batting Average: ");
        scanf("%f",&p[i].average);

    }
    printf("List\n");
    for(i=0;i<2;i++){
        printf("%s   -%.2f\n",p[i].name,p[i].average);
    }
}