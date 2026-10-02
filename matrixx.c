#include<stdio.h>
int main()
{
int x, y, i, j, choice;

printf("Enter no. of rows in the matrix: "); 
	if (scanf("%d", &x) != 1 || x < 1) {
    printf("Invalid input for rows. \n");
    return 1; 		// Exit the program with an error code
}
printf("Enter no. of columns in the matrix: "); 
	if (scanf("%d", &y) != 1 || y < 1) {
    printf("Invalid input for columns. \n");
    return 1; 
}
	if (x > 100 || y > 100) {
	printf("Matrix size exceeds maximum allowed dimensions (100x100). \n");
	return 1; 
}
	if (x != y) {
	printf("Matrix must be square (rows must equal columns). \n");
	return 1; 
}

int a[x][y], b[x][y], sum[x][y], subt[x][y];

printf("FOR MATRIX 1: \n");
for (i = 0; i < x; i++)
{
	for (j = 0; j < y; j++)
	{
	printf("Enter the value in row %d, column %d: ",i+1 ,j+1);
		if (scanf("%d", &a[i][j]) != 1) {
			printf("Invalid input for matrix 1 row %d, column %d. \n", i+1, j+1);
			return 1;
		}
	}
}

printf("FOR MATRIX 2: \n");

for (i = 0; i < x; i++)
{
	for (j = 0; j < y; j++)
	{
	printf("Enter the value in row %d, column %d: ",i+1 ,j+1);
		if (scanf("%d", &b[i][j]) != 1) {
			printf("Invalid input for matrix 2 row %d, column %d. \n", i+1, j+1);
			return 1;
		}
	
}}

for (i = 0; i < x; i++)
{
	for (j = 0; j < y; j++)
	{
	sum[i][j] = a[i][j] + b[i][j];
	subt[i][j] = a[i][j] - b[i][j];
}}

printf("Enter 1 for addition of matrices or Enter 2 for subtraction of matrices: ");
	if (scanf("%d", &choice) != 1 || choice != 1 && choice != 2){
	printf("Invalid input. Please enter 1 or 2. \n");
	return 1;
};

if (choice == 1){
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("%d ", sum[i][j]);
	}
	printf("\n");
	}
}
else if (choice == 2){
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("%d ", subt[i][j]);
	}
	printf("\n");
	}
}
else {
	printf("Invalid input");
}

return 0;
}
