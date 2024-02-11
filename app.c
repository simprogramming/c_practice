#include <stdio.h>
#include <stdbool.h>

int main(){

    int x;
    x = 9;

    int y = 321;

    bool e = true;

    int age = 31;
    float gpa = 2.05;
    char grade = 'A';
    char name[] = "Simon";

    int j = 214783647;
    unsigned int k = 4294967295;

    printf("%d\n", j);
    printf("%u\n", k);

    printf("You are %d years old",age);
    printf("hello %s",name);
    return 0;
}