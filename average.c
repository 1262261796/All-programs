#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("Enter marks of 1st student");scanf("%f",&a);
	printf("Enter marks of 2nd student");scanf("%f",&b);
	printf("Enter marks of 3rd student");scanf("%f",&c);
	printf("Enter marks of 4th student");scanf("%f",&d);
	printf("Enter marks of 5th student");scanf("%f",&e);
	float f = a+b+c+d+e;
	float g = f/5;
	//extra 
	printf("Sum of %f, %f, %f, %f, %f is = %f",a,b,c,d,e,f);
	printf("The average is = %.3f",g);
	return 0;
}
