#include <stdio.h>
#include <ctype.h>

int findMax(int x, int y) {
    return (x > y) ? x : y;
}

int main(){

    int max = findMax(5,29);
    printf("%d\n", max);

    return 0;
}