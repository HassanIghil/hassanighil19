#include<stdio.h>
#include<stdlib.h>

float puissance(int x, int n) {
    float result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

int factoriel(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    float x;

    
    printf("Entrer un reel : ");
    scanf("%f", &x);


    float exp = 1.0;
    for (int n = 1; n <= 3; n++) {
        exp += puissance(x, n) / (float)factoriel(n);
    }

    printf("Exponentiel de %f est %f\n", x, exp);

    return 0;
}
