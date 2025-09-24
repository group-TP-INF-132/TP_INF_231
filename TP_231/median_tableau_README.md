# Médiane Tableau

Ce programme en C calcule la médiane d'un tableau d'entiers.

## Fonctionnalités

- Saisie du nombre d'éléments et des valeurs du tableau
- Tri du tableau en ordre croissant (tri à bulle)
- Affichage du tableau trié
- Calcul et affichage de la médiane

## Utilisation

1. Compiler le programme :
   ```sh
   gcc median_tableau.c -o median_tableau.exe
   ```
2. Exécuter :
   ```sh
   median_tableau.exe
   ```
3. Saisir le nombre d'éléments et les valeurs du tableau lorsque demandé.

## Exemple d'exécution

```
Entrez le nombre d'elements dans le tableau (max 100): 5
Entrez les elements du tableau:
Element 1: 8
Element 2: 3
Element 3: 7
Element 4: 2
Element 5: 5
Tableau trier : 2 3 5 7 8
La mediane du tableau est: 5.00
```

## Remarques

- Le programme accepte jusqu'à 100 éléments.
- Si le nombre d'éléments est pair, la médiane est la moyenne des deux valeurs centrales.
- Si le nombre d'éléments est impair, la médiane est la valeur centrale du tableau trié.
