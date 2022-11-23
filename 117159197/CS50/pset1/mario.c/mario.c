#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while(n < 1);
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // for each row
    for (int i=0; i<n; i++)
    {
        // for each colum
        for(int j=0; j<0; j++)
        {
          // print a brick
        printf("#");
        }

    // move to next row
    printf("\n");
    }
}