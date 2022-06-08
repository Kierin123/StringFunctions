#include "src/StringFunctions.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"












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



    UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((countCharacters(testString, charToCount1))), (

   ((void *)0)

   ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((countCharacters(testString, charToCount2))), (

   ((void *)0)

   ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((countCharacters(testString, charToCount3))), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}



void test_StringFunctions_removeCharacters_1(void)

{

    char *testString = malloc(sizeof(char) * 10);

    strcpy(testString, "ABCDABCAB");



    removeCharacters(testString, 'A');



    UnityAssertEqualString((const char*)(("BCDBCB")), (const char*)((testString)), (

   ((void *)0)

   ), (UNITY_UINT)(38));



    free(testString);

}



void test_StringFunctions_removeCharacters_2(void)

{

    char *testString = malloc(sizeof(char) * 10);

    strcpy(testString, "ABCDABCAB");



    removeCharacters(testString, 'B');



    UnityAssertEqualString((const char*)(("ACDACA")), (const char*)((testString)), (

   ((void *)0)

   ), (UNITY_UINT)(50));



    free(testString);

}



void test_StringFunctions_calculateLength(void)

{

    char *testString = "ABCDABCAB";



    UnityAssertEqualNumber((UNITY_INT)((9)), (UNITY_INT)((calculateLength(testString))), (

   ((void *)0)

   ), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_INT);

}



void test_StringFunctions_concatenateStrings(void)

{

    char *stringBase = malloc(sizeof(char) * 20);

    char *stringToConcatenate = malloc(sizeof(char) * 10);



    strcpy(stringBase, "abcd");

    strcpy(stringToConcatenate, "ABCD");



    concatenateStrings(stringBase, stringToConcatenate);



    UnityAssertEqualString((const char*)(("abcdABCD")), (const char*)((stringBase)), (

   ((void *)0)

   ), (UNITY_UINT)(72));

}



void test_StringFunctions_copyString(void)

{

    char *stringBase = malloc(sizeof(char) * 10);

    char *stringToCopy = malloc(sizeof(char) * 10);



    strcpy(stringBase, "");

    strcpy(stringToCopy, "ABCD");



    UnityAssertEqualString((const char*)(("")), (const char*)((stringBase)), (

   ((void *)0)

   ), (UNITY_UINT)(83));



    copyString(stringBase, stringToCopy);



    UnityAssertEqualString((const char*)(("ABCD")), (const char*)((stringBase)), (

   ((void *)0)

   ), (UNITY_UINT)(87));

}



void test_StringFunctions_findSubString(void)

{

    char *stringBase = malloc(sizeof(char) * 10);

    int position = 0;



    strcpy(stringBase, "ABCDEFGH");



    position = findSubString(stringBase, "GH");

    UnityAssertEqualNumber((UNITY_INT)((6)), (UNITY_INT)((position)), (

   ((void *)0)

   ), (UNITY_UINT)(98), UNITY_DISPLAY_STYLE_INT);



    position = findSubString(stringBase, "AB");

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((position)), (

   ((void *)0)

   ), (UNITY_UINT)(101), UNITY_DISPLAY_STYLE_INT);



    position = findSubString(stringBase, "xx");

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((position)), (

   ((void *)0)

   ), (UNITY_UINT)(104), UNITY_DISPLAY_STYLE_INT);



    position = findSubString(stringBase, "H");

    UnityAssertEqualNumber((UNITY_INT)((7)), (UNITY_INT)((position)), (

   ((void *)0)

   ), (UNITY_UINT)(107), UNITY_DISPLAY_STYLE_INT);

}
