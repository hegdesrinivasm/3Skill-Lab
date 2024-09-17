#include <stdio.h>
void main()
{
    int i, j, c = 1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j == 2)
            {
                printf("10\t");
                c++;
            }
            else
            {
                printf("%d\t", (5 * c)); // Change this value to be multiplied with 'c' to get multiples of that number.
                c++;
            }
        }
        printf("\n");
    }
}