#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int t;
    int i = 0;
    do
    {
        t = get_int("Enter change(in cents): ");
    }
    while (t < 1);

    i += t / 25;
    t = t % 25;
    i += t / 10;
    t = t % 10;
    i += t / 5;
    t = t % 5;
    i += t;
    printf("coins: %i\n", i);
}
