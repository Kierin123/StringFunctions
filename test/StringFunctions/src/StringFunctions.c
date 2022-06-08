#include "StringFunctions.h"
#include <string.h>
#include <stdlib.h>

int countCharacters(char *str, char c)
{
    int count = 0;

    while (*str)
    {
        if (c == *str)
            count++;
        str++;
    }

    return count;
}
void removeCharacters(char *str, char c)
{
    char *tempStr = malloc(sizeof(char) * 10);
    strcpy(tempStr, "");

    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] != c)
            strncat(tempStr, &(str[i]), 1);
    }
    strcpy(str, tempStr);
}

int calculateLength(char *str)
{
    int count = 0;
    while (*str)
    {
        count++;
        str++;
    }
    return count;
}

char *concatenateStrings(char *str1, char *str2)
{
    while (*str1)
        str1++;

    strcpy(str1, str2);
}

void copyString(char *dest, char *src)
{
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
}

int findSubString(char *str, char *subStr)
{
    int count = 0;
    int position = -1;
    int strLen = strlen(str);
    int subLen = strlen(subStr);

    while (*str)
    {
        if(!strncmp(str, subStr, subLen))
        {
            position = count;
        }
        str++;
        count++;
    }

    return position;
}
