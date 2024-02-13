#include <stdio.h>
#include <stdbool.h>

int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);


    if(age >= 18){
        printf("you get a credit card\n");
    }
    else if(age<0){
        printf("you are not born yet!\n");
    }
    else {
        printf("sorry cant do that\n");
    }
    return 0;
}