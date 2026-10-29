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

char xp[100];
printf("Enter text: ");scanf("%s", xp);

int xx = 5;
int yy = ++x;  // x is increased first, then y gets 6
printf("x = %d, y = %d\n", xx, yy);  // x = 6, y = 6

int aa = 5;
int bb = a++;  // b gets 5 first, then a is increased
printf("a = %d, b = %d\n", aa, bb);  // a = 6, b = 5



int myAge = 43;     // An int variable
int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

//////// Dereference: Output the value of myAge with the pointer (43)
printf("%d\n", *ptr);




return 0;
}