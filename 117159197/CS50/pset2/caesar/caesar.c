#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Check if one commont line argument
    if(argc !=2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Key define

    string key = argv[1];


    // check the input for conditions
    for(int i = 0; i < strlen(argv[1]); i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

    }

    // Get plaintext from user
    string PlainText = get_string("plaintext:  ");

    // Converted text
    int k = atoi(key);
    printf("ciphertext: ");

    // Upeercase and Lowercase
    for(int i = 0; i < strlen(PlainText); i++)
    {
        if(islower(PlainText[i]))
        {
            printf("%c", ((PlainText[i] - 97) + k) %26 + 97);
        }
        else if((isupper(PlainText[i])))
        {
            printf("%c", ((PlainText[i] - 65) + k) %26 + 65);
        }
        else
        {
            printf("%c", PlainText[i]);
        }

    }
    printf("\n");



}