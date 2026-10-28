//program to print odd number of dashes from reverse
#include<stdio.h>
int main(){
    int n;
    printf("Enter an odd digit: "); scanf("%d", &n);
    if (n % 2 == 0 || n < 1){
        printf("Wrong input");
        return 1;
    }
    int i;
    for (i = 0; i < n; i++){
        int j;
        for (j = 0; j <= i; j++){
            printf("-");
        }
        printf("\n");
    }
    return 0;
}