#include <stdio.h>
#include <ctype.h>

void birthday(char name[], int age) {
    printf("Happy birthday dear %s\n", name);
    printf("You are %d year old\n", age);
}

int main(){

    char name[] = "Bro";
    int age = 21;

    birthday(name, age);

    return 0;
}