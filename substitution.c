#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mapping(string key, string p);
int main(int argc, string argv[])
{
    if (argc == 2 && strlen(argv[1]) == 26)
    {
        for (int u = 0; u < 26; u++)
        {
            if (!isalpha(argv[1][u]))
            {
                printf("Usage: ./substitution key(alphabets only)\n");
                return 1;
            }
            else
            {
                for (int v = u + 1; v < 26; v++)
                {
                    if (argv[1][u] == argv[1][v] || argv[1][u] == argv[1][v] - 32 ||
                        argv[1][u] == argv[1][v] + 32)
                    {
                        printf("Redundancy in key\n");
                        return 1;
                    }
                }
            }
        }
    }
    else if (argc == 2 && strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // plaintext
    string text = get_string("plaintext:");

    // output ciphertext
    mapping(argv[1], text);
}

void mapping(string key, string p)
{
    char c[strlen(p)];
    string ALPHA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0, N = strlen(p); i < N; i++)
    {
        if (isupper(p[i]))
        {
            for (int j = 0; j < 26; j++)
            {
                if (p[i] == ALPHA[j])
                {
                    if (isupper(key[j]))
                    {
                        c[i] = key[j];
                    }
                    else
                    {
                        c[i] = toupper(key[j]);
                    }
                }
            }
        }
        else if (islower(p[i]))
        {
            for (int j = 0; j < 26; j++)
            {
                if (p[i] == alpha[j])
                {
                    if (islower(key[j]))
                    {
                        c[i] = key[j];
                    }
                    else
                    {
                        c[i] = tolower(key[j]);
                    }
                }
            }
        }
        else
        {
            c[i] = p[i];
        }
    }
    int N = strlen(p);
    c[N] = '\0';
    printf("ciphertext: %s\n", c);
}
