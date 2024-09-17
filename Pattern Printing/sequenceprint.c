// Program to print the sequence of numbers in a matrix form
#include <stdio.h>
void main()
{
    int m, n, t = 1;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d\t", t++);
        }
        printf("\n");
    }
}