/*Using arrays, write a c program that calculates the average of marks got
by a student in three subjects i.e physics, chemistry, math. assume for each
subject 4 different tests were conducted; assignment, course work, mid term, and end of term.*/
#include <stdio.h>

#define SUBJECTS 3
#define TESTS 4

int main() {
    // Array to store marks for each subject and each test
    int marks[SUBJECTS][TESTS];
    float subject_average[SUBJECTS];
    float overall_average = 0.0;

    char subjects[SUBJECTS][20] = {"Physics", "Chemistry", "Math"};

    for (int i = 0; i < SUBJECTS; i++) {
        printf("Enter the marks for %s:\n", subjects[i]);

        int total_marks = 0;

        for (int j = 0; j < TESTS; j++) {
            printf("Enter marks for test %d (Assignment, Course work, Mid term, End term): ", j + 1);
            scanf("%d", &marks[i][j]);
            total_marks += marks[i][j];
        }
        subject_average[i] = total_marks / (float)TESTS;
        printf("Average marks in %s: %.2f\n", subjects[i], subject_average[i]);

        overall_average += subject_average[i];
    }
    overall_average /= SUBJECTS;
    printf("\nOverall average of marks: %.2f\n", overall_average);

    return 0;
}


