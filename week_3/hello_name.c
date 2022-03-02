#include <stdio.h>

int main(void) {

    printf("What is your name?");
    char name[20];
    scanf(name);

    printf("Hello, %s!\n", name");

    return 0;
}       
