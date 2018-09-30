#include "ex00/match.c"
#include <stdio.h>

int main()
{
    printf("Test nmatch:\n");
    printf("Test values \"aaa\" and \"aaa\": %s\n", match("aaa", "aaa") ? "OK" : "ERROR");
    printf("Test values \"aaa\" and \"*\": %s\n", match("aaa", "*") ? "OK" : "ERROR");
    printf("Test values \"\" and \"\": %s\n", match("", "") ? "OK" : "ERROR");
    printf("Test values \"*\" and \"*\": %s\n", match("*", "*") ? "OK" : "ERROR");
    printf("Test values \"\" and \"*\": %s\n", match("", "*") ? "OK" : "ERROR");
    printf("Test values \"aaa\" and \"****\": %s\n", match("aaa", "****") ? "OK" : "ERROR");
    printf("Test values \"aaa\" and \"aaa****\": %s\n", match("aaa", "aaa****") ? "OK" : "ERROR");
    printf("Test values \"aaa\" and \"*aaa****\": %s\n", match("aaa", "*aaa****") ? "OK" : "ERROR");
    printf("Test values \"aaa\" and \"a*a*a\": %s\n", match("aaa", "a*a*a") ? "OK" : "ERROR");
    printf("Test values \"aaa\" and \"a*b*a\": %s\n", match("aaa", "a*b*a") ? "ERROR" : "OK");
    printf("Test values \"Foo Bar Baz\" and \"Fo********ah\": %s\n", match("Foo Bar Baz", "Fo********ah") ? "ERROR" : "OK");

    getchar();
    return (0);
}