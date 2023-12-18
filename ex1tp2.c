#include<stdio.h>
#include<stdlib.h>

int iHeure, iMinute, iSeconde;

void affiche_heure() {
    printf("%d heure(s) %d minute(s) %d seconde(s)\n", iHeure, iMinute, iSeconde);
}

void saisir_heure() {
    printf("Entrer l'heure : ");
    scanf("%d", &iHeure);
    printf("Entrer les minutes : ");
    scanf("%d", &iMinute);
    printf("Entrer les secondes : ");
    scanf("%d", &iSeconde);
}

void tick() {
    int s;
    s = iHeure * 3600 + iMinute * 60 + iSeconde;
    s = s + 1;
    iHeure = s / 3600;
    iMinute = (s % 3600) / 60;
    iSeconde = s % 60;
    affiche_heure();
}

int main() {
    saisir_heure();
    affiche_heure();
    tick();

    return 0;
}
