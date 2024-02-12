#include <stdio.h>
#include <stdbool.h>

int main(){
    // Allo
    int age = 21;
    float gpa = 2.05;
    char grade = 'A';
    char name[] = "Simon";

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);
    return 0;
}