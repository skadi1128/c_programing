#include <stdio.h>

#define SIZE 15

void printBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

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
    printBoard(board);

    // ask user where to put x
    printf("Where does X want to go? ");
    int column;
    int row;
    scanf("%i %i", &column, &row);
    printf("column: %d, row: %d\n", column, row);

    // put the x in the board
    board[column - 1][row - 1] = 'x';

    // print board again with the x
    printBoard(board);
    
    return 0;
}
