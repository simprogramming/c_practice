#include <stdio.h>
#include <stdbool.h>

int main(){

    char name[25];
    int age;

    printf("\nWhats your name?");
    // scanf("%s", name);
    fgets(name, 25, stdin);


    printf("\nHow old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old\n", age);


    return 0;
}