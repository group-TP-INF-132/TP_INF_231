#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ux, uy, uz, vx, vy, vz;
    float wx, wy, wz;

    // Lecture des vecteurs u et v
    printf("Entrez les composantes du vecteur u (ux uy uz) : ");
    if (scanf("%f %f %f", &ux, &uy, &uz) != 3)
        return 1;
    printf("Entrez les composantes du vecteur v (vx vy vz) : ");
    if (scanf("%f %f %f", &vx, &vy, &vz) != 3)
        return 1;

    // Formule du produit vectoriel
    wx = uy * vz - uz * vy;
    wy = uz * vx - ux * vz;
    wz = ux * vy - uy * vx;

    // affichage du produit vectoriel
    printf("Produit vectoriel u x v = (%.3f, %.3f, %.3f)\n", wx, wy, wz);
    return 0;
}
