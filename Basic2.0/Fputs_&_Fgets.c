#include<stdio.h>
int main() {
fputs("My name is Vedant Mishra",stdout);
    
    char name[20];
    printf("Enter name : ");
    fgets(name,sizeof(name),stdin);
    printf("Hello %s",name);
}