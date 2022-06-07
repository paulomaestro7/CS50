#include <stdio.h>
#include <cs50.h>

//use debug50 ./scores for debug this code
int main(void)
{
    int n = get_int("How many interactions? \n");

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = i * 50;
        printf("%i\n", scores[i]);
    }
}