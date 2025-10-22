#include <math.h>
#include <stdio.h>

int main(void)
{
    /*int monthdays[] = {31,29,31,30,31};
    int smonth = 1, sday = 1;
    int emonth = 5, eday = 31;

    int diff = 0;
    for (int i = 0; i < emonth; i++)
    {
        for (int j = 0; j < monthdays[i]; j++)
        {
            diff += 1;
        }
    }
    int weeks = diff / 7;
    int remain = diff % 7;
    printf("Number of days is %d\n", diff);
    printf("Number of weeks is %d\n", weeks);
    printf("Number of days which could not be rounded to weeks is %d\n", remain);

    int matrix[2][3] = {{1,4,2}, {3,6,8}};
    matrix[0][0] = 9;
    printf("%d", matrix[0][0]);
    int u,v ;
    for (u = 0; u < 2; u++)
    {
        for (v = 0; v < 3; v++)
        {
            printf("%d", matrix[u][v]);
        }
    }*/

    int k=-2,j=4;
    switch(k/=j/k)
    {
        default: printf("All are same\n");
        case 0 : printf("Happy Birthday\n");
        case 1 : printf("A punch on the mouth\n");
        case 2 : printf("A kick in the back\n");
    }
    printf("%d\n", k);

    /*int j,x = 0;
    for(j = 0; j<= 5; j++)
    {
        switch(j-1)
        {
            case 0 :
            case -1 : x+=1 ; break;
            case 1:
            case 2:
            case 3: x+=2; break;
            default: x += 3;
        }
        printf("%d\n", x);
    }*/
}

