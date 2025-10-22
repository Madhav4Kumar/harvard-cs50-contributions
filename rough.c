#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
    //1
    /*int x=3, y=4, z=4;
    printf("ans = %d\n", z >=y && y>=x?1:0);

    //2
    int w ;
    printf("enter the year: \n");
    scanf("%d", &w);
    if (w%4 == 0 && w%400 == 0)
    {
      printf("It is a leap year\n");
    }
    else
    {
      printf("It is not a leap year\n");
    }


    //3
    int monthdays[] = {31,29,31,30,31};
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

    //4
    float a = 12.25, b = 13.65;
    if ( a == b)
    {
      printf("a and b are equal\n");
    }
    else
    {
      printf("a and b are not equal\n");
    }

   //5
    int i = 10, j= 40;
    if ((j-i)%10)
    {
      printf("man sees your actions\n");
    }
    else
    {
      printf("god sees your motives\n");
    }

    //6
    int i = -4, j, num = 10;
    j = i%-3;
    printf("j = %d\n",j);

    j = (j?0:num*num);
    printf("j = %d\n",j);

    //7
    long double a = 0.7;
    if (a<0.7)
    {
      printf("stoned\n");
    }
    else
    {
      printf("avenged\n");
    }

    //8
    int i = 400*400/ 400;
    if (i == 400)
    {
      printf("Filibusters\n");
    }
    else
    {
      printf("sea gherkins\n");
    }

    //9
    int k = 12, n = 30;
    k = (k>5 && (n = 4) ? 100:200);
    printf("k = %d\n", k);
    printf("%d\n",n);


    //10
    int c = 0, d = 5, e = 10, a;
    a = c>1 ? (d > 1 || e> 1? (100:200)):300;
    printf("a = %d\n", a);

    //11
    int a =10, b = 10;
    printf("ans = %d\n", a>b ? a+a : b/b);

    //12
    int x = 10, y = 20;
    x = !x;
    y = !x && y;
    printf("x = %d, y = %d\n", x, y);

    //13
    int x = 10, y = 20;
    if (!(!x) && x)
    {
      printf("x = %d\n", x);
    }
    else
    {
      printf("y = %d\n", y);
    }

    //14
    float a  =0.5, b = 0.9;
    if (a &&b >0.9)
    {
      printf("idleness is a virtue\n");
    }
    else
    {
      printf("..so is stupidity\n");
    }

    //15
    int x = 100;
    if (!!x)
    {
      printf("x = %d\n", !x);
    }
    else
    {
      printf("x = %d\n", x);
    }*/

    //16
    int i =1;
    while(i<=5)
    {
      printf("%d\n", i);
      ++i;
      printf("%d\n", i);
    }
    return 0;

    //17
    /*double number, sum = 0;
    do
    {
      printf("Enter a number: ");
      scanf("%lf", &number);
      sum += number;
    }
    while(number != 0.0);
    printf("Sum = %.2lf\n", sum);
    return 0;

    //18
    int i;
    for ( i = 1; i <= 10; i++)
    {
      if (i==5)
      {
        break;
      }
      else
      {
        printf("%d\n", i);
      }
    }
    printf("Hello\n");

    //19
    float sum = 0, num;
    do
    {
      printf("enter number to add: ");
      scanf("%f", &num);
      sum += num;
    }
    while (sum%2 != 0)
    printf("sum = %f\n", sum);
    return 1;

    //20
    int j = 1;
    while (j<=255)
    {
      printf("%d\n", ++j);
    }

    //21
    int a;
    for(a=1;a<=32767;a++)
    {
      printf("%d\n",a);
    }

    //22
    int i;
    for(i=1;i<=5;i++)
    {
      printf("%d\n", i);
    }

    //23
    int i=1,j=0;
    for(;;printf("%d %d\n", i, j))
    {
      j = i++<=5;
    }

    //24
    int i = 1;
    for(;i++;i)
    {
      printf("%d\n", i);
    }*/


}

