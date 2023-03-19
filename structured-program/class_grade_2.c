#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int grade;
    unsigned int student_id;
    int grade_sum;
    int average;

    grade_sum = 0;
    student_id = 1;

    while (student_id < 11)
    {
        printf("Student ID: %d \n", student_id);
        printf("Enter grade:  ");
        scanf("%d", &grade);
        grade_sum = grade_sum + grade;
        printf("Grade sum: %d \n", grade_sum);
        student_id += 1;
    }

    average = grade_sum / 10;

    printf("Class Average is %d \n", average);
}