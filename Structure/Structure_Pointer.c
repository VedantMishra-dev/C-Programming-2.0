#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student s1;
    strcpy(s1.name,"Vedant Mishra");
    s1.age = 20;
    s1.gpa = 3.8;

    struct Student *ptr;
    ptr = &s1;
    printf("Name: %s\n",ptr->name);
    printf("Age: %d\n",ptr->age);
    printf("GPA: %.2f\n",ptr->gpa);

    ptr->age = 21;
    printf("Updated Age: %d\n", ptr->age);


    printf("Size of Student: %lu bytes", sizeof(struct Student));
    return 0;
}