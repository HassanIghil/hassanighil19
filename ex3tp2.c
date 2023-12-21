#include<stdio.h>
#include<stdlib.h>


int lire_entier() {
    int n;
    printf("Entrer la valeur de n : ");
    scanf("%d", &n);
    return n;
}

int fibonacci_iteratif(int n) {
    int u1 = 1, u2 = 1, un = 0;

    if (n == 1 || n == 2) {
        return 1;
    }

    for (int i = 3; i <= n; i++) {
        un = u1 + u2;
        u1 = u2;
        u2 = un;
    }

    return un;
}

int fibonacci_recursive(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}


void afficher_fibonacci(int n, int valeur) {
    printf("La %de valeur de la suite de Fibonacci est : %d\n\n", n, valeur);
}

int main() {
    int n;

    n = lire_entier();


    int valeur_iteratif = fibonacci_iteratif(n);
    afficher_fibonacci(n, valeur_iteratif);

    int valeur_recursive = fibonacci_recursive(n);
    afficher_fibonacci(n, valeur_recursive);

    return 0;
}
