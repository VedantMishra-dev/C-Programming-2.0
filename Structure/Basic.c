#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[100]; // Define name as an array of characters
    int age;
    float grade;
};

int main() {
    struct Student s1;

    // Use strcpy to assign a string to the name member
    strcpy(s1.name, "Vedant Mishra");
    s1.age = 20;
    s1.grade = 8.5;

    // Print the structure members
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Grade: %.2f\n", s1.grade);

    return 0;
}
