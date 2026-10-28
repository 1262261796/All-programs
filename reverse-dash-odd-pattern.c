#include<stdio.h>
int main(){
    int n;
    printf("Enter an odd digit: "); scanf("%d", &n);
    if (n % 2 == 0 || n < 1){
        printf("Wrong input");
        return 1;
    }

    for (int i = n; i >= 1; i = i - 2){ 
        for (int j = 1; j <= (n-i)/2; j++){
            printf(" ");
        }
        for (int j = 0; j < i; j++){
                printf("#");
            }
        printf("\n");
    }
    for (int i = 1; i <= n; i = i + 2){
        for (int j = 1; j <= (n-i)/2; j++){
            printf(" ");
        }
        for (int j = 0; j < i; j++){
                printf("#");
        }
        printf("\n");
    }

    return 0;
}