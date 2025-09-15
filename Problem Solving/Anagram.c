#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool areAnagrams(char str1[], char str2[])
{
    if (strlen(str1) != strlen(str2))
    {
        return false;
    }
    int count[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)tolower(str1[i])]++;
    }

    for (int i = 0; str2[i] != '\0'; i++)
    {
        count[(unsigned char)tolower(str2[i])]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("They are anagrams\n");
    else
        printf("They are not anagrams\n");

    return 0;
}
