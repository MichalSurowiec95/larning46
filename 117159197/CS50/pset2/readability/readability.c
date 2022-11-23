#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // get input from user
    string text = get_string("text: ");

    int letters = 0;
    int words = 1;
    int stentences = 0;

    // if input is letter
    for(int i = 0; i < strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            letters++;
        }

        else if(text[i] == ' ')
        {
            words++;
        }

        else if(text[i] == '.' || text[i] == '?' || text[i] == '!' )
        {
            stentences++;
        }

    }

    // Print Output
    float L = (float)letters / (float)words * 100;
    float S = (float)stentences / (float)words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if(index < 1)
    {
        printf("Before Grade 1...");
    }

    if( index > 16)
    {
        printf("Grade 16+\n");
    }

    else
    {
        printf("Grade %i\n", index);
    }

}