#include <stdio.h>
void main()
{
    int m, n, i, j, t, a, con, c = 1;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number to print it's mulitples: ");
    scanf("%d", &t);
    printf("Enter the column number to contain constant values: ");
    scanf("%d", &a);
    printf("Enter the constant value: ");
    scanf("%d", &con);
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == a)
            {
                printf("%d\t", con);
                c++;
            }
            else
            {
                printf("%d\t", (t * c));
                c++;
            }
        }
        printf("\n");
    }
}