#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[100];
    int n, i, temp;

    printf("Entrez le nombre d'elements dans le tableau (max 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Taille invalide.\n");
        return 1;
    }

    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Affichage du tableau original
    printf("\nTableau original : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Inverser le tableau
    for (i = 0; i < n / 2; i++)
    {
        temp = tableau[i];
        tableau[i] = tableau[n - 1 - i];
        tableau[n - 1 - i] = temp;
    }

    // Affichage du tableau apres inversion
    printf("Tableau inverse : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
