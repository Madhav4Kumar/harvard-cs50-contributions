#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate(int key, string p);
int main(int argc, string argv[])
{
    // single CLA input(key)
    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int key = atoi(argv[1]);

    // plaintext input
    string script = get_string("plaintext:  ");

    // output ciphertext
    rotate(key, script);
}

void rotate(int key, string p)
{
    char c[strlen(p)];
    for (int i = 0, N = strlen(p); i < N; i++)
    {
        if (isupper(p[i]))
        {
            p[i] = p[i] - 65;
            c[i] = (p[i] + key) % 26;
            c[i] = c[i] + 65;
        }
        else if (islower(p[i]))
        {
            p[i] = p[i] - 97;
            c[i] = (p[i] + key) % 26;
            c[i] = c[i] + 97;
        }
        else
        {
            c[i] = p[i];
        }
    }
    printf("ciphertext: %s\n", c);
}
