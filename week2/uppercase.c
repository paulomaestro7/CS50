#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

//use debug50 ./uppercase for debug this code
int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    for (int i = 0, n= strlen(s); i <= n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}