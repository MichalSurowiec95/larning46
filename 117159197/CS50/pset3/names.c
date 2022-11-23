#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Dawid", "Michal", "Piotr", "Pawel", "Karol"};

    for (int i = 0; 1 < 7; i++)
    {
        if (strcmp(names[i], "Pawel") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}