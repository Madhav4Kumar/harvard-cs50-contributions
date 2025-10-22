#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int arr1[] = {10,20,30,40,50};
    int N = sizeof(arr1);
    //2
    for (int i = 0; i <N; i++)
    {
        printf("%d", arr1[N - i]);
    }

    //3
    int arr2[] = {0};
    for(int k = 0; k < N; k++)
    {
        for(int l = 1; l < k; l++)
        {
            if (arr1[k] == arr1[l])
            {
                arr2[k] = arr1[k];
                printf("%d", arr2[k]);
                return 1;
            }
        }
    }

    //4
    int X = 0;
    for(int m = 0; m < N; m++)
    {


    }

    //5
    int sum = 0;
    for(int j = 0 ; j < N; j++)
    {
        sum+=arr1[j];
    }
    printf("%d", sum);
}
