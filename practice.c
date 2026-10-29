#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the size of the square: "); scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf(" *");
    }
    printf("\n");
    for(i = 1; i <= n-2; i++){    
        printf(" *");
        for (int j = 1; j <= 2*n - 3; j++){
        printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i = 1; i <= n; i++){
        printf(" *");
    }
    return 0;
}