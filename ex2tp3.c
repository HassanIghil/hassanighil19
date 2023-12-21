#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Vector;

void lire(Vector *v) {
    printf("Enter x and y components: ");
    scanf("%f %f", &v->x, &v->y);
}

void afficher(Vector v) {
    printf("Vector: (%.2f , %.2f)\n", v.x, v.y);
}

Vector somme(Vector v1, Vector v2) {
    Vector v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v;
}

float produit_scalaire(Vector v1, Vector v2) {
    return v1.x * v2.x + v1.y * v2.y;
}

float distance_euclidienne(Vector v1, Vector v2) {
    return sqrt(pow(v2.x - v1.x, 2) + pow(v2.y - v1.y, 2));
}

int main() {
    Vector v1, v2;
    lire(&v1);
    lire(&v2);
    afficher(v1);
    afficher(v2);
    Vector v = somme(v1, v2);
    printf("Sum of vectors: ");
    afficher(v);
    printf("Scalar product: %.2f\n", produit_scalaire(v1, v2));
    printf("Euclidean distance: %.2f\n", distance_euclidienne(v1, v2));
    return 0;
}
