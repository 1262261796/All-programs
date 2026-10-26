#include<stdio.h>
int main(){

    int n, i;
    int fact = 1;
    printf("Enter the number for factorial: (number should be from 1 to 20)"); scanf("%d", &n);
    if (n < 0){
        printf("Entered value is negative, factorial is not defined.");
        return 1;
    }
    else if (n > 20){
        printf("Factorial for number > 20 requires high computation. \n");
        printf("Ending program. ");
        return 1;
    }
    else {
    for (i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("The factorial of %d is %d", n, fact);
    }
    return 0;
}