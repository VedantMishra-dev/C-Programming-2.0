#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Company {
    char name[100];
    int age;
    int stipiend;
};


int main() {
    struct Company c1 = {"Sandeep Phalke",18,2300};
    printf("Name : %s\n",c1.name);
    printf("Age : %d\n",c1.age);
    printf("Stipend : %d",c1.stipiend);

    c1.age =19;
    printf("\nUpdated Age : %d\n", c1.age);
    return 0;
}
