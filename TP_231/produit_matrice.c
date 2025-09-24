#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matrix_A[10][10], matrix_B[10][10], produit[10][10];
    int i, j, k, rows_A, cols_A, rows_B, cols_B;
    printf("Entrez les dimensions de la matrice A (1-10): ");
    scanf("%d %d", &rows_A, &cols_A);
    printf("Entrez les elements de la matrice A:\n");
    for (i = 0; i < rows_A; i++)
    {
        for (j = 0; j < cols_A; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrix_A[i][j]);
        }
    }
    printf("Entrez les dimensions de la matrice B (1-10): ");
    scanf("%d %d", &rows_B, &cols_B);
    // Verifie que la taille des deux matrices est equivalente
    if (cols_A != rows_B)
    {
        printf("Erreur: le nombre de colonnes de A doit etre egal au nombre de lignes de B.\n");
        return 1;
    }
    printf("Entrez les elements de la matrice B:\n");
    for (i = 0; i < rows_B; i++)
    {
        for (j = 0; j < cols_B; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrix_B[i][j]);
        }
    }
    // Initialiser la matrice produit a zero
    for (i = 0; i < rows_A; i++)
    {
        for (j = 0; j < cols_B; j++)
        {
            produit[i][j] = 0;
        }
    }
    // Calculer le produit des matrices A et B
    for (i = 0; i < rows_A; i++)
    {
        for (j = 0; j < cols_B; j++)
        {
            for (k = 0; k < cols_A; k++)
            {
                produit[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }
    // affiche le resultat
    printf("Le produit des matrices A et B est:\n");
    for (i = 0; i < rows_A; i++)
    {
        for (j = 0; j < cols_B; j++)
        {
            printf("%d ", produit[i][j]);
        }
        printf("\n");
    }
    return 0;
}