#include<stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1){
        return 1;
    }
    else{
    return n * factorial(n - 1); 
    }
}
int main(){
    int n, i;
    int fact = 1;
    printf("Enter the number for factorial, (number should be from 1 to 20): ");
    scanf("%d", &n);
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
        printf("The factorial of %d is: %d", n, factorial(n));
    }
    return 0;
}