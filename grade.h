#ifndef GRADE_H
#define GRADE_H

// Function prototypes
int calculateTotal(int a, int b, int c);
float calculateAverage(int total);
char getLetterGrade(float average);
void printReport(int total, float average, char grade);

// Global variable for scope demo
extern int passingMark;

#endif
