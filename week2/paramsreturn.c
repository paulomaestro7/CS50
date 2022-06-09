#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

//use debug50 ./params for debug this code
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command line arguments!\n");
        return 0;
    }
    printf("Hello, %s\n", argv[1]);
    return 0;
}