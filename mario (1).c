#include <cs50.h>
#include <stdio.h>

void hash(void);
int main(void)
{
    int i=0;
    for(i=0;i<4;i++)
    {
      int j=0;
      for(j=0;j<=i;j++)
      {
        hash();
      }
      printf("\n");
    }
}



void hash(void)
{
   printf("# #");
}

