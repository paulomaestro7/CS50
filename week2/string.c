#include <stdio.h>
#include <cs50.h>
#include <string.h>

//use debug50 ./string for debug this code
int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");

    for (int i = 0, n= strlen(s); i <= n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}