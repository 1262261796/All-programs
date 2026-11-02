#include<stdio.h>
int main(){
    int n, height, i, j;
    printf("enter the height of the diamond, (only odd integer allowed): ");
    scanf("%d", &height);
    if (height % 2 == 0 || height < 3){
        printf("Input is even or less than 3");
        return 1;
    }
    n = (height-1) / 2;
        for (i = 1; i <= n; i++){
            printf(" ");
        }    
        printf("*");
        printf("\n");
    // from second line: space star space star        to middle
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n-i; j++){
            printf(" ");
        }
        printf("*");
        for (j = 1; j <= 2*i - 1; j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    //from middle to last line

     for (i = n-1; i >= 1; i--){
        for (j = 1; j <= n-i; j++){
            printf(" ");
        }
        printf("*");
        for (j = 1; j <= 2*i - 1; j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    //last line
    for (i = 1; i <= n; i++){
            printf(" ");
        }    
        printf("*");
        printf("\n");

    return 0;
}