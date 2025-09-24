# Multiplication par Additions Répétées

Ce programme en C réalise la multiplication de deux entiers positifs en utilisant des additions successives.

## Fonctionnalités

- Saisie de deux entiers positifs a et b
- Vérification que les deux entiers sont strictement positifs
- Calcul du produit de a et b par additions répétées
- Affichage du résultat

## Utilisation

1. Compiler le programme :
   ```sh
   gcc multiplication.c -o multiplication.exe
   ```
2. Exécuter :
   ```sh
   multiplication.exe
   ```
3. Saisir les deux entiers positifs lorsque demandé.

## Exemple d'exécution

```
Entrez deux entiers positifs a et b : 2 3
2 x 3 = 6
```

## Remarques

- Si l'un des entiers est négatif ou nul, le programme affiche une erreur et s'arrête.
- La multiplication est réalisée par addition de a, b fois.
