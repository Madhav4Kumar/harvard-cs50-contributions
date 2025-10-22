#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int score_calc(int length, char upcasestring[]);
int main(void)
{
    string p1 = get_string("Player 1: \n");
    string p2 = get_string("Player 2: \n");

    int N = strlen(p1);
    int M = strlen(p2);

    char up1[N];
    char up2[M];

    for (int u = 0; u < N; u++)
    {
        up1[u] = toupper(p1[u]);
    }
    for (int u = 0; u < M; u++)
    {
        up2[u] = toupper(p2[u]);
    }
    // player1 score calc
    int score1 = score_calc(M, up1);

    // player2 score calc
    int score2 = score_calc(N, up2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int score_calc(int length, char upcasestring[])
{
    int values[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char alpha[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    int score = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (upcasestring[i] == alpha[j])
            {
                score += values[j];
            }
            else
            {
                score += 0;
            }
        }
    }
    return score;
}
