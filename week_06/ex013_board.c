#include <stdio.h>
int main() {
    //board
    int rows = 3;
    int cols = 5;
    int count = 1;
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++) {
            printf("+----+");
        }
        printf("\n");
        for (int j = 0; j < cols; j++) {
            printf("| %2d |", count);
            count++;
        }
        printf("\n");
    }
    for (int k = 0; k < cols; k++) {
        printf("+----+");
    }
    printf("\n");
    return 0;
}