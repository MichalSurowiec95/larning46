#include <stdio.h>

int main(void)
{
   int number[] = {4, 6 ,8, 2, 7, 5, 0};

   printf("%i\n", *number);
   printf("%i\n", *(number + 1));
   printf("%i\n", *(number + 2));
   printf("%i\n", *(number + 3));
   printf("%i\n", *(number + 4));
   printf("%i\n", *(number + 5));
   printf("%i\n", *(number + 6));
}