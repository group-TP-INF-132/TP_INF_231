# Produit Vecteur-Matrice

Ce programme en C calcule le produit d'un vecteur par une matrice.

## Fonctionnalités

- Saisie de la dimension du vecteur et de la matrice
- Saisie des éléments du vecteur et de la matrice
- Calcul du produit du vecteur par la matrice
- Affichage du résultat

## Utilisation

1. Compiler le programme :
   ```sh
   gcc produit_vecteur_matrice.c -o produit_vecteur_matrice.exe
   ```
2. Exécuter :
   ```sh
   produit_vecteur_matrice.exe
   ```
3. Saisir la dimension, les éléments du vecteur et de la matrice lorsque demandé.

## Exemple d'exécution

```
Entrez la dimension du vecteur : 3
Entrez les éléments du vecteur : 1 2 3
Entrez les éléments de la matrice (3x3) :
1 0 0
0 1 0
0 0 1
Produit du vecteur par la matrice : 1 2 3
```

## Remarques

- Le programme suppose que la taille du vecteur correspond au nombre de colonnes de la matrice.
- Le produit est calculé selon la règle classique de l'algèbre linéaire.
