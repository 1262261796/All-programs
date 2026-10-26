#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
    float marks[3];
    float total;
    float percentage;
};

int main() {
    struct Student s;
    int i;

    s.total = 0;

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollno);

    printf("Enter marks of 3 subjects:");

    for (i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);

        s.total += s.marks[i];
    }
   

    s.percentage = (s.total / 300) * 100;
    

    printf("\n--- Student Details ---\n");
    printf("Name \t");
    printf("Roll Number \t");
    printf("Subject 1: \t");
    printf("Subject 2: \t");
    printf("Subject 3: \t");
    printf("Total \t\t");
    printf("Percentage: \t \n");

    printf("%s\t", s.name);
    printf("%d\t\t", s.rollno);
    printf("%.2f\t\t", s.marks[1]);
    printf("%.2f\t\t", s.marks[2]);
    printf("%.2f\t\t", s.marks[3]);
    printf("%.2f\t\t", s.total);
    printf("%.2f%%\t", s.percentage);    


    return 0;
}