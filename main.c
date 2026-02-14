#include <stdio.h>
#include "grade.h"

int main() {

    int m1, m2, m3;
    int total;
    float average;
    char grade;

    printf("Enter mark 1: ");
    scanf("%d", &m1);

    printf("Enter mark 2: ");
    scanf("%d", &m2);

    printf("Enter mark 3: ");
    scanf("%d", &m3);

    total = calculateTotal(m1, m2, m3);
    average = calculateAverage(total);
    grade = getLetterGrade(average);

    printReport(total, average, grade);

    return 0;
}
