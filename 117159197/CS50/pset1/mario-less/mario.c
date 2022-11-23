#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        // take user input
        n = get_int("hight: ");
    }
    while (n < 1 || n > 8);
    // for each colum
    for (int i = 0; i < n ; i++)
    {
        // for each row
        for (int j = 0; j < n; j++)
        {
            if (n - 1 > i + j)

                // print a dot
                printf(" ");

            else

                // Print a brick
                printf("#");
        }
        
              printf("\n");
    }
}