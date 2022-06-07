#include <cs50.h>
#include <stdio.h>

void printBlocks(int size);

int main(void)
{
    //this is continue variable, start true
    bool whileContinue = true;
    do
    {
        //user input, int number between 1 and 8
        int size = get_int("Height: ");
        //Rule user input
        if (size >= 1 & size <= 8)
        {
            printBlocks(size);
            break;
        }
    }
    while (whileContinue);
}

//function print blocks
void printBlocks(int size)
{
    //loop height
    for (int i = 0; i < size; i++)
    {
        //loop width
        for (int j = 0; j < size; j++)
        {
            //calculation char space
            int sizeChar = ((size - 1) - i);

            if (sizeChar > j)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}