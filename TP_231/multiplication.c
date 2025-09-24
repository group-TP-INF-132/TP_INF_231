#include <stdio.h>
// Multiplication de deux entiers positifs a et b en utilisant des additions répétées
int main()
{
    int a, b, i, produit = 0;

    printf("Entrez deux entiers positifs a et b : ");
    scanf("%d %d", &a, &b);

    // verifie qu'il s'qgit bien de deux entiers positifs
    if (a <= 0 || b <= 0)
    {
        printf("Erreur : a et b doivent etre > 0.\n");
        return 1;
    }

    /*Procede a l'addition successive de a jusqu'a b
    si a=2 et b=3
    le programme fera 2+2+2
    Autrement dit a s'addition a lui meme b-fois*/

    for (i = 0; i < b; i++)
    {
        produit += a;
    }

    // affiche le resultat de la multiplication
    printf("%d x %d = %d\n", a, b, produit);
    return 0;
}
