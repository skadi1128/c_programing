#include <stdio.h>

#define SIZE 15

int main(void) {
    // make a 2D array
    char board[SIZE][SIZE];

    // initialize the array
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '.';
        }
    }

    // print the array
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    // ask user where to put x
    printf("Where does X want to go? ");
    char column;
    int row;
    scanf("%c %i", &column, &row);
    printf("column: %c, row: %d\n", column, row);
    
    return 0;
}
