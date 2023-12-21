#include <stdio.h>

void lire(int A[], int d) {
    for(int i = 0; i < d; i++) {
        printf("Enter l element %d: ", i+1);
        scanf("%d", &A[i]);
    }
}
void afficher(int A[], int d) {
    printf("les elements du tableau :  ");
    for(int i = 0; i < d; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void trier(int A[], int d) {
    int temp;
    for(int i = 0; i < d-1; i++) {
        for(int j = i+1; j < d; j++) {
            if(A[j] < A[i]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int rechercher(int A[], int d, int elt) {
    int deb = 0, fin = d-1, mid;
    while(deb <= fin) {
        mid = (deb + fin) / 2;
        if(A[mid] == elt)
            return mid;
        else if(A[mid] < elt)
            deb= mid + 1;
        else
            fin = mid - 1;
    }
    return -1;
}

int main() {
    int d;
    printf("entrer la taille du tableau : ");
    scanf("%d",&d);
    int A[d];
    lire(A, d);
    afficher(A, d);
    trier(A, d);
    afficher(A, d);
    int elt;
    printf("Enter l'element a rechercher: ");
    scanf("%d", &elt);
    int index = rechercher(A, d, elt);
    if(index != -1)
        printf("Element se trouve a l'indice  %d\n", index);
    else
        printf("Element non trouve\n");
    return 0;
}
