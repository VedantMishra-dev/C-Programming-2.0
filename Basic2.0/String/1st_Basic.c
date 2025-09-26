#include<stdio.h>
void print_str(char str[]) {
    int i=0;
    while(str[i]!='\0') {
        printf("%c",str[i]);
        i++;
    }
}
int main() {
    // char str[] = {'V','e','d','a','n','t','\0'};
    char str[] = "Vedant";
    print_str(str);
    return 0;
}