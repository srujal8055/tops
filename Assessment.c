#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &m2, &n2);

    if (n1 != m2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int mat1[m1][n1], mat2[m2][n2], result[m1][n2];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
