#include<stdio.h>
int main(){

    int a = 10;
    int* ptr = &a;  // a pointer variable that stores the address of variable a 

    printf("%d \n", a);
    printf("%p \n", &a);
    printf("%p", ptr);

    return 0;
}