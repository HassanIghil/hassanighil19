#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float Puissance(float x, int n) {
    float p = 1, i;
    for (i = 1; i <= n; i++)
        p = p * x;
    return(p);
}

int Factoriel(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f = f * i;
    return(f);
}

void Exponentiel(float x) {
    float exp = 1, anc, i = 1;
    do {
        anc = exp;
        exp = exp + (Puissance(x, i) / (float)Factoriel(i));
        i++;
    } while (fabs(exp - anc) >= 0.001);
    printf("Exponentiel de %f est %f\n", x, exp);
}

int main() {
    float ex;
    printf("Entrer un reel : \n");
    scanf("%f", &ex);
    Exponentiel(ex);
    return 0;
}
