#include <stdio.h>
#include <cs50.h>

int string_length(string value);

//use debug50 ./length for debug this code
int main(void)
{
    string name = get_string("What´s your name? \n");
    int length = string_length(name);
    printf("%i\n", length);
}

int string_length(string value)
{
    int i = 0;
    while(value[i] != '\0')
    {
        i++;
    }
    return i;
}