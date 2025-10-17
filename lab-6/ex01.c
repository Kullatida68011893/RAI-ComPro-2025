// Write a program to store information of 3 students inside the struct with the following properties: name (100 characters max), age(int), score(float)
// and print the stored value from struct at the end

#include<stdio.h>

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

    for (int i = 0; i < 3; i++)
    {
        printf("student %d name is \"%s\", age %d.\n", i + 1, students[i].name, students[i].age);
    }

    return(0); 
}
