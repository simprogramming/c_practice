#include <stdio.h>
#include <stdbool.h>

int main(){

    char grade;

    printf("\nEnter your grade: ");
    scanf("%c", &grade);

    switch (grade){
        case 'A':
            printf("u are very good\n");
            break;
        case 'B':
            printf("study more\n");
            break;
        default:
            printf("please only enter valide grade\n");

    }
    return 0;
}