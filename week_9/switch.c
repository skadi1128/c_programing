#include <stdio.h>

void swap(int *addressA, int *addressB) {
    int box = *addressA;
    *addressA = *addressB;
    *addressB = box;
}

int main(void) {
    int a = 3;
    int b = 5;
    printf("%p\n", &a);

    printf("a = %d, b=%d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}    
