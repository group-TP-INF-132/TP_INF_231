#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[100];
    int n, i, j, temp;
    float mediane;

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

    // Effectue un Tri a bulle pour mettre en ordre croissant
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (tableau[j] > tableau[j + 1])
            {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // affiche le tableau trier
    printf("Tableau trier : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Calcul de la médiane
    if (n % 2 == 0)
    {
        // si n est pair, moyenne des deux du milieu
        mediane = (tableau[n / 2 - 1] + tableau[n / 2]) / 2.0;
    }
    else
    {
        // si n est impair, l'élément du milieu
        mediane = tableau[n / 2];
    }

    // affiche la mediane
    printf("La mediane du tableau est: %.2f\n", mediane);

    return 0;
}
