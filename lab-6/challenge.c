#include <stdio.h>

typedef struct student 
{
    char name[21];
    int id;
    float grades[4];
} t_student;

int main() 
{
    t_student students[3];        
    float studentaverages[3] = {0};          
    float subjectaverages[4] = {0};
    char *subjects[4] = {"Math", "English", "Science", "History"};

    for (int i = 0; i < 3; i++) 
    {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%s %d %f %f %f %f",
              students[i].name,
              &students[i].id,
              &students[i].grades[0],
              &students[i].grades[1],
              &students[i].grades[2],
              &students[i].grades[3]);
    }

    int topstudentindex = 0;
    for (int i = 0; i < 3; i++) 
    {
        float sum = 0;
        for (int j = 0; j < 4; j++) 
        {
            sum += students[i].grades[j];
            subjectaverages[j] += students[i].grades[j];
        }
        studentaverages[i] = sum / 4;
        if (studentaverages[i] > studentaverages[topstudentindex]) 
        {
            topstudentindex = i;
        }
    }

    for (int j = 0; j < 4; j++) 
    {
        subjectaverages[j] = subjectaverages[j] / 3;
    }

    int topsubjectindex = 0;
    for (int j = 1; j < 4; j++) {
        if (subjectaverages[j] > subjectaverages[topsubjectindex]) {
            topsubjectindex = j;
        }
    }

    printf("\nStudent Averages:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s (ID: %d): %.2f\n", students[i].name, students[i].id, studentaverages[i]);
    }

    printf("\nTop Student: %s with %.2f\n",
           students[topstudentindex].name, studentaverages[topstudentindex]);

    printf("\nSubject Averages:\n");
    for (int j = 0; j < 4; j++) {
        printf("%s: %.2f\n", subjects[j], subjectaverages[j]);
    }

    printf("\nTop Subject: %s with average %.2f\n",
           subjects[topsubjectindex], subjectaverages[topsubjectindex]);

    return (0);
}