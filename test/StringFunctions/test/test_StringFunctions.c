#define TEST
#ifdef TEST

#include "unity.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "StringFunctions.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_StringFunctions_countCharacters(void)
{
    char *testString = "ABCDABCAB";
    char charToCount1 = 'C';
    char charToCount2 = 'A';
    char charToCount3 = 'D';

    TEST_ASSERT_EQUAL(2, countCharacters(testString, charToCount1));
    TEST_ASSERT_EQUAL(3, countCharacters(testString, charToCount2));
    TEST_ASSERT_EQUAL(1, countCharacters(testString, charToCount3));
}

void test_StringFunctions_removeCharacters_1(void)
{
    char *testString = malloc(sizeof(char) * 10);
    strcpy(testString, "ABCDABCAB");

    removeCharacters(testString, 'A');

    TEST_ASSERT_EQUAL_STRING("BCDBCB", testString);

    free(testString);
}

void test_StringFunctions_removeCharacters_2(void)
{
    char *testString = malloc(sizeof(char) * 10);
    strcpy(testString, "ABCDABCAB");

    removeCharacters(testString, 'B');

    TEST_ASSERT_EQUAL_STRING("ACDACA", testString);

    free(testString);
}

void test_StringFunctions_calculateLength(void)
{
    char *testString = "ABCDABCAB";

    TEST_ASSERT_EQUAL(9, calculateLength(testString));
}

void test_StringFunctions_concatenateStrings(void)
{
    char *stringBase = malloc(sizeof(char) * 20);
    char *stringToConcatenate = malloc(sizeof(char) * 10);

    strcpy(stringBase, "abcd");
    strcpy(stringToConcatenate, "ABCD");

    concatenateStrings(stringBase, stringToConcatenate);

    TEST_ASSERT_EQUAL_STRING("abcdABCD", stringBase);
}

void test_StringFunctions_copyString(void)
{
    char *stringBase = malloc(sizeof(char) * 10);
    char *stringToCopy = malloc(sizeof(char) * 10);

    strcpy(stringBase, "");
    strcpy(stringToCopy, "ABCD");

    TEST_ASSERT_EQUAL_STRING("", stringBase);

    copyString(stringBase, stringToCopy);

    TEST_ASSERT_EQUAL_STRING("ABCD", stringBase);
}

void test_StringFunctions_findSubString(void)
{
    char *stringBase = malloc(sizeof(char) * 10);
    int position = 0;

    strcpy(stringBase, "ABCDEFGH");

    position = findSubString(stringBase, "GH");
    TEST_ASSERT_EQUAL(6, position);
    
    position = findSubString(stringBase, "AB");
    TEST_ASSERT_EQUAL(0, position);

    position = findSubString(stringBase, "xx");
    TEST_ASSERT_EQUAL(-1, position);

    position = findSubString(stringBase, "H");
    TEST_ASSERT_EQUAL(7, position);
}

#endif // TEST

// int countCharacters(char* str, char c);
// void removeCharacters(char* str, char c);
// int calculateLength(char *str);
// void concatenateStrings(char *str1, char *str2);
// void copyString(char *dest, char *src);
// void findSubString(char *str, char *subStr);
