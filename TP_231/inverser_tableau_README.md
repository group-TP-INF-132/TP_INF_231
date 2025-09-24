# Inverser un Tableau

Ce programme en C inverse les éléments d'un tableau d'entiers.

## Fonctionnalités

- Saisie du nombre d'éléments et des valeurs du tableau
- Affichage du tableau original
- Inversion des éléments du tableau
- Affichage du tableau inversé

## Utilisation

1. Compiler le programme :
   ```sh
   gcc inverser_tableau.c -o inverser_tableau.exe
   ```
2. Exécuter :
   ```sh
   inverser_tableau.exe
   ```
3. Saisir le nombre d'éléments et les valeurs du tableau lorsque demandé.

## Exemple d'exécution

```
Entrez le nombre d'elements dans le tableau (max 100): 5
Entrez les elements du tableau:
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40
Element 5: 50

Tableau original : 10 20 30 40 50
Tableau inverse : 50 40 30 20 10
```

## Remarques

- Le programme accepte jusqu'à 100 éléments.
- L'inversion est réalisée en échangeant les éléments symétriques du tableau.
