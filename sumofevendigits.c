#include<stdio.h>
int main(){
    int n = 8613741;
    int sumEven = 0;
    int r = 0;
    while (n > 0){
        r = n % 10;
        if (r % 2 == 0){
            sumEven = sumEven + r;
        }
        n = n / 10;
    }
    printf("Sum of even digits: %d\n", sumEven);
    return 0;
}