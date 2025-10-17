#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LEN 50

struct Student 
{
    char name[MAX_NAME_LEN];
    int grade;
};

double calculateAverage(struct Student students[], int n) 
{
    int i, sum = 0;
    for (i = 0; i < n; i++) 
    {
        sum += students[i].grade;
    }
    return (double)sum / n;
}

int findHighest(struct Student students[], int n) 
{
    int i, highest = students[0].grade;
    for (i = 1; i < n; i++) 
    {
        if (students[i].grade > highest) 
        {
            highest = students[i].grade;
        }
    }
    return highest;
}

int findLowest(struct Student students[], int n) 
{
    int i, lowest = students[0].grade;
    for (i = 1; i < n; i++) {
        if (students[i].grade < lowest) 
        {
            lowest = students[i].grade;
        }
    }
    return lowest;
}

void printPassed(struct Student students[], int n) 
{
    int i;
    printf("Students who passed:\n");
    for (i = 0; i < n; i++) 
    {
        if (students[i].grade >= 60) 
        {
            printf("%s\n", students[i].name);
        }
    }
}

int main() 
{
    struct Student students[MAX_STUDENTS];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter grade of %s: ", students[i].name);
        scanf("%d", &students[i].grade);
    }

    double avg = calculateAverage(students, n);
    int highest = findHighest(students, n);
    int lowest = findLowest(students, n);

    printf("--- Results ---\n");
    printf("Average grade: %.2f\n", avg);
    printf("Highest grade: %d\n", highest);
    printf("Lowest grade: %d\n", lowest);

    printPassed(students, n);

    return 0;
}
