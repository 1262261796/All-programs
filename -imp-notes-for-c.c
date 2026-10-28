#include<stdio.h>
int main(){

// %c = char
// %s = string
// %d = int
// %f = float
// %lf = double // for more digits in decimal
// %lld = long long int

//for only 2 digits after deciaml use "%.2f"

// swapping variables
int a = 5;
int b = 10;
int temp;

temp = a;
a = b;
b = temp;

//strings
char text[] = "hi";
printf("%s \n", text);


// to get the size in bytes of a data type or variable
int x;
long long y;
float f;
double d;

printf("%zu, %zu, %zu, %zu", sizeof(x), sizeof(y), sizeof(f), sizeof(d));









return 0;
}