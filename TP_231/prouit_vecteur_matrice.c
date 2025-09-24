#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j;
    float V[100], M[100][100], R[100];

    // Entrez la taille du vecteur et le nombre de colonne de la matrice
    printf("Entrez la taille du vecteur (n) : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de la matrice (m) : ");
    scanf("%d", &m);

    // Entrez les elements du vecteur
    printf("Entrez les %d elements du vecteur V :\n", n);
    for (i = 0; i < n; i++)
        scanf("%f", &V[i]);

    // Entrez les elements de la matrice
    printf("Entrez les elements de la matrice %d x %d :\n", n, m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

    // Calcul du produit R = V × M
    for (j = 0; j < m; j++)
    {
        R[j] = 0;
        for (i = 0; i < n; i++)
            R[j] += V[i] * M[i][j];
    }

    // Affiche le resultat du produit
    printf("Resultat (vecteur de taille %d) : ", m);
    for (j = 0; j < m; j++)
        printf("%.2f ", R[j]);
    printf("\n");

    return 0;
}
