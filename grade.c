#include <stdio.h>
#include "grade.h"

// Global variable definition
int passingMark = 60;

// Calculate total marks
int calculateTotal(int a, int b, int c) {
    return a + b + c;
}

// Calculate average
float calculateAverage(int total) {
    return total / 3.0;
}

// Get letter grade
char getLetterGrade(float average) {

    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}

// Print final report
void printReport(int total, float average, char grade) {

    // Local variable with same name (shadowing demo)
    int passingMark = 50;

    printf("\n--- Student Report ---\n");
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Letter Grade: %c\n", grade);

    // Show shadowing
    printf("\nLocal passingMark: %d\n", passingMark);
    printf("Global passingMark: %d\n", passingMark);

}
