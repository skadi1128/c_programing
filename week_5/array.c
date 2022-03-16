#include <stdio.h>
int main(void)
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int f = 6;
    int g = 7;
    int h = 8;
    int i = 9;
    int j = 1;
    // printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1};

    int index;
    for (index = 0; index < 10; index++){
        printf("%d ", array [index]);
        }
    printf("\n");

    printf ("%d\n", array[10]);

    return 0;
}
