// Use all of your code from exercise #1, and make it print out the person with the highest score

#include <stdio.h>

struct Student
{
    char name[100];
    int age;
    float score;
};

int main()
{
    struct Student students[3] = 
    {
        {"John Smith", 20, 69.3},
        {"Joe Smith", 21, 75.5},
        {"kraksana", 25,11.49},
    };

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d's name: %s\n", i + 1, students[i].name);
        printf("Student %d's age: %d\n", i + 1, students[i].age);
        printf("Student %d's score: %.1f\n", i + 1, students[i].score);
    }

    int highestvalue = 0;
    for (int i = 0; i < 3; i++)
    {
        if (students[i].score > highestvalue)
        {
            highestvalue = i;
        }
    }
    printf("The highest score belongs to %s at %.1f scores!\n", 
           students[highestvalue].name, students[highestvalue].score);
    return(0);
}

