#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string script);
int count_words(string script);
int count_sentences(string script);
int main(void)
{
    string script = get_string("Text: \n");

    // count letters, words, sentences
    int letters = count_letters(script);
    int words = count_words(script);
    int sentences = count_sentences(script);
    float L = (letters / (float) words) * 100;
    float S = (sentences / (float) words) * 100;

    // coleman-liau

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

    // print grade level
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

int count_letters(string script)
{
    int letters = 0;
    for (int i = 0, N = strlen(script); i < N; i++)
    {
        if (isalpha(script[i]))
        {
            letters += 1;
        }
        else
        {
            letters += 0;
        }
    }
    return letters;
}

int count_words(string script)
{
    int whitesp = 0;
    for (int i = 0, N = strlen(script); i < N; i++)
    {
        if (isspace(script[i]))
        {
            whitesp += 1;
        }
        else
        {
            whitesp += 0;
        }
    }
    int words = whitesp + 1;
    return words;
}

int count_sentences(string script)
{
    int sentences = 0;
    for (int i = 0, N = strlen(script); i < N; i++)
    {
        if (script[i] == '?' || script[i] == '.' || script[i] == '!')
        {
            sentences += 1;
        }
        else
        {
            sentences += 0;
        }
    }
    return sentences;
}
