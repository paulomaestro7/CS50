#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS [] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    string player1 = "Player 1";
    string player2 = "Player 2";

    // Get input words from both players
    string word1 = get_string("%s: ", player1);
    string word2 = get_string("%s: ", player2);

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    //if Player 1 is greater Player 2, he is winner
    if (score1 > score2)
    {
        printf("%s wins!\n", player1);
    }
    //if Player 2 is greater Player 1, he is winner
    else if (score2 > score1)
    {
        printf("%s wins!\n", player2);
    }
    //nobody win
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    int sum = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (islower(word[i]))
        {
            //subtract input with ASCII value, sample: 'p' is 112 in ASCII table and 'a' is 97, result is array position 15
            sum += POINTS[word[i] - 'a'];
        }
        else if (isupper(word[i]))
        {
            //subtract input with ASCII value, sample: 'P' is 80 in ASCII table and 'A' is 65, result is array position 15
            sum += POINTS[word[i] - 'A'];
        }
        else
        {
            sum += 0;
        }
    }
    return sum;
}