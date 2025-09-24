#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tableau[100], n, i, valeur_recherchee, trouve = 0;
    printf("Entrez le nombre d'elements dans le tableau (max 100): ");
    scanf("%d", &n);
    // verifie la limite du tableau n'est pas depasser
    if (n > 100 || n <= 0)
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
    printf("Entrez la valeur a rechercher: ");
    scanf("%d", &valeur_recherchee);
    // procede a la recherche d'une valeur specifique case par case
    for (i = 0; i < n; i++)
    {
        if (tableau[i] == valeur_recherchee)
        {
            trouve = 1;
            break;
        }
    }
    if (trouve)
    {
        printf("Valeur %d trouvee a l'index %d.\n", valeur_recherchee, i);
    }
    else
    {
        printf("Valeur %d non trouvee dans le tableau.\n", valeur_recherchee);
    }
    return 0;
}