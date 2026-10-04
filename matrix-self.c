#include<Stdio.h>
intmain() {
    int matrix[3][3], i, j;

    // Input elements in the matrix
    printf("Enter elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("The entered matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
