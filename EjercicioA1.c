#include <stdio.h>
int main()
{
    int n, m;
    printf("ponga un tamaño de filas");
    scanf("%d", &n);
    printf("ponga un tamaño de columnas");
    scanf("%d", &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j]=0;
        } 
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d", matrix[i][j]);
        } 
    }
    return 0;
}