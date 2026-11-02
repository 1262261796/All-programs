#include<stdio.h>
int main(){
    int length, breadth, i, j;
    printf("Enter length of the rectangle: "); scanf("%d", &length);
    printf("Enter breadth of the rectangle: "); scanf("%d", &breadth);
    for (i=1; i<=length; i++){
        printf("*");
    }
    printf("\n");
    for (i=1; i<=breadth-2; i++){
        printf("*");
        for (j=1; j<=length-2; j++){
        printf(" ");
        }
        printf("*");
        printf("\n");
    }
    
    for (i=1; i<=length; i++){
        printf("*");
    }
    return 0;
}