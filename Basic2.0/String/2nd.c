#include<stdio.h>
#include<string.h>
int main() {
    char str1[] = "Vedant";
    char str2[] = "ravi";
    // puts(strcat(str1,str2));
    // printf("\n");
    // puts(str1);
    printf("the length of str1 is %d\n",strlen(str1));
    printf("thr reverse string is : ");
    puts(strrev(str1));

    //use of strcpy
    char s3[54];
    strcpy(s3,strcat(str1,str2));

    //strcmp
    printf("\n%d",strcmp(str1,str2));
}