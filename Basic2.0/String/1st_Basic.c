#include<stdio.h>
void print_str(char str[]) {
    int i=0;
    while(str[i]!='\0') {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
int main() {
    // char str[] = {'V','e','d','a','n','t','\0'};
    char str[7] = "Vedant";
    print_str(str);
    char str2[34];
    gets(str2);
    puts(str2);
    printf("\n");
    printf("%s ",str2);
    return 0;
}