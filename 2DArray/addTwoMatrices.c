
#include <stdio.h>

void add_matrices(int* mat1, int* mat2, int* result, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            *(result + i * columns + j) = *(mat1 + i * columns + j) + *(mat2 + i * columns + j);
        }
    }
}

int main() {
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    add_matrices((int*)mat1, (int*)mat2, (int*)result, 2, 2);

    printf("Resultant matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
