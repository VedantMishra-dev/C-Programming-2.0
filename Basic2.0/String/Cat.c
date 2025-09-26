#include<stdio.h>
#include<string.h>
int main() {
    char str1[10];
    gets(str1);
    char str2[10];
    gets(str2);
    printf("%s is a friend of %s ",str1,str2);
}