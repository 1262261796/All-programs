#include<stdio.h>
int main(){

    int n;
    int fact = 1;
    int i = 1;
    printf("Enter an integer for checking factorial: "); scanf("%d", &n);
    while (i <= n){
        fact = fact * i;
        i = i + 1;
    }
    printf("Factorial of %d is %d", n, fact);
    return 0;
}