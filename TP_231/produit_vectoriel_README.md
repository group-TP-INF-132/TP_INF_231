# Produit Vectoriel

Ce programme en C calcule le produit vectoriel de deux vecteurs dans l'espace (3D).

## Fonctionnalités

- Saisie des composantes des deux vecteurs u et v
- Calcul du produit vectoriel selon la formule :
  - wx = uy _ vz - uz _ vy
  - wy = uz _ vx - ux _ vz
  - wz = ux _ vy - uy _ vx
- Affichage du résultat sous forme (wx, wy, wz)

## Utilisation

1. Compiler le programme :
   ```sh
   gcc produit_vectoriel.c -o produit_vectoriel.exe
   ```
2. Exécuter :
   ```sh
   produit_vectoriel.exe
   ```
3. Saisir les composantes des deux vecteurs lorsque demandé.

## Exemple d'exécution

```
Entrez les composantes du vecteur u (ux uy uz) : 1 2 3
Entrez les composantes du vecteur v (vx vy vz) : 4 5 6
Produit vectoriel u x v = (-3.000, 6.000, -3.000)
```

## Remarques

- Les vecteurs doivent être donnés sous forme de trois réels (flottants).
- Le programme vérifie la saisie correcte des valeurs.
