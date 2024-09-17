// Program to print numbers or stars
#include <stdio.h>
void main()
{
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}