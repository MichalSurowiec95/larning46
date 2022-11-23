#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{

    person people[2];

    people[0].name = "Carter";
    people[0].number = "513 107 029";

    people[1].name = "Mike";
    people[1].number = "764 3946";

   for(int i = 0; i < 2; i++)
   {
        if(strcmp(people[i].name, "Carter") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
   }
   printf("Not Found\n");
   return 1;
}