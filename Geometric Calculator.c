#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159
#define EQUILATERAL 1
#define ISOCELE 2
#define SCALENE 3

int scan() {
   int nombre;
   while(scanf("%d", &nombre) != 1) {
      printf("Erreur : veuillez entrer un nombre entier valide.\n");
      while(getchar() != '\n'); // Vider le tampon d'entrée
      printf("Entrez un nombre entier : ");
   }
   return (nombre);
}

void afficherMenu() {
	printf("0) quitter \n");
    printf("1) choisir une forme en 2D \n");
    printf("2) choisir une forme en 3D \n");
    printf("==> ");
}

void afficherFormes2D() {
    printf("1) carre\n");
    printf("2) rectangle\n");
    printf("3) triangle\n");
}

void afficherFormes3D() {
    printf("4) sphere\n");
    printf("5) cube\n");
    printf("6) cylindre\n");
    printf("7) pyramide\n");
}

void calculerCarre(float cote) {
    float aire = cote * cote;
    float perimetre = 4 * cote;
    printf("L'aire du carre est : %f\n", aire);
    printf("Le perimetre du carre est : %f\n", perimetre);
}

void calculerRectangle(float longueur, float largeur) {
    float aire = longueur * largeur;
    float perimetre = 2 * (longueur + largeur);
    printf("L'aire du rectangle est : %f\n", aire);
    printf("Le perimetre du rectangle est : %f\n", perimetre);
}

void calculerTriangle(float a, float b, float c) {

    float perimetre = a + b + c;
    float s = perimetre / 2;
    float aire = sqrt(s * (s - a) * (s - b) * (s - c));
    int type;
    
    if (a == b && b == c) {
        type = EQUILATERAL; 
    } else if (a == b || b == c || a == c) {
        type = ISOCELE; 
    } else {
        type = SCALENE; 
    }
    printf("L'aire du triangle est : %f\n", aire);
    printf("Le perimetre du triangle est : %f\n", perimetre);
    printf("Le triangle est de type : ");

    switch(type) {

        case EQUILATERAL:
            printf("equilateral\n");
            break;

        case ISOCELE:
            printf("isocele\n");
            break;

        case SCALENE:
            printf("scalene\n");
            break;
    }
}

void calculerSphere(float rayon) {
    float aire = 4 * PI * pow(rayon, 2);
    float volume = (4.0 / 3.0) * PI * pow(rayon, 3);
    printf("L'aire de la sphere est : %f\n", aire);
    printf("Le volume de la sphere est : %f\n", volume);
}

void calculerCube(float cote) {
    float aire = 6 * cote * cote;
    float volume = cote * cote * cote;
    printf("L'aire du cube est : %f\n", aire);
    printf("Le volume du cube est : %f\n", volume);
}

void calculerCylindre(float rayon, float hauteur) {
    float aire = 2 * PI * rayon * (rayon + hauteur);
    float volume = PI * pow(rayon, 2) * hauteur;
    printf("L'aire du cylindre est : %f\n", aire);
    printf("Le volume du cylindre est : %f\n", volume);
}

void calculerPyramide(float longueur_base, float hauteur) {
    float aire = longueur_base * longueur_base + 2 * longueur_base * sqrt((longueur_base / 2) * (longueur_base / 2) + hauteur * hauteur);
    float volume = (longueur_base * longueur_base * hauteur) / 3;
    printf("L'aire de la pyramide est : %f\n", aire);
    printf("Le volume de la pyramide est : %f\n", volume);
}

void main() {
    int choix, forme;
    float cote, longueur, largeur, a, b, c, rayon, hauteur, longueur_base;
printf("\t _____________________\n\t");
printf("|  _________________  |\n\t");
printf("| | Calculatrice de | |\n\t");
printf("| |    geometrie    | |\n\t");
printf("| |_________________| |\n\t");
printf("|  __ __ __ __ __ __  |\n\t");
printf("| |__|__|__|__|__|__| |\n\t");
printf("| |__|__|__|__|__|__| |\n\t");
printf("| |__|__|__|__|__|__| |\n\t");
printf("| |__|__|__|__|__|__| |\n\t");
printf("| |__|__|__|__|__|__| |\n\t");
printf("| |__|__|__|__|__|__| |\n\t");
printf("|  ___ ___ ___   ___  |\n\t");
printf("| | 7 | 8 | 9 | | + | |\n\t");
printf("| |___|___|___| |___| |\n\t");
printf("| | 4 | 5 | 6 | | - | |\n\t");
printf("| |___|___|___| |___| |\n\t");
printf("| | 1 | 2 | 3 | | x | |\n\t");
printf("| |___|___|___| |___| |\n\t");
printf("| | . | 0 | = | | / | |\n\t");
printf("| |___|___|___| |___| |\n\t");
printf("|_____________________|\n\t\n\n\n\n");
        while (1) {
        afficherMenu();
        forme=scan();
        if (forme == 0) {
            printf("Au revoir!\n");
            exit(0);
        }
        system("cls");
        printf("\n");
        switch (forme) {
            case 1:
                while(1) {
                    afficherFormes2D();
                    printf("\nchoisissez la forme que vous souhaitez :\n");
                    choix=scan();
                    system("cls");
                    switch (choix) {
                        case 1:
                            printf("Vous avez choisi le carre.\n");
                            printf("\nEntrez la longueur du cote du carre: ");
                            cote=scan();
                            calculerCarre(cote);
                            break;
                        case 2:
                            printf("Vous avez choisi le rectangle.\n");
                            printf("\nEntrez la longueur du rectangle: ");
                            longueur=scan();
                            printf("Entrez la largeur du rectangle: ");
                            largeur=scan();
                            calculerRectangle(longueur, largeur);
                            break;
                        case 3:
                            printf("Vous avez choisi le triangle.\n");
                            printf("\nEntrez la longueur du premier cote : ");
                            a=scan();
                            printf("Entrez la longueur du deuxieme cote : ");
                            b=scan();
                            printf("Entrez la longueur du troisieme cote : ");
                            c=scan();
                            calculerTriangle(a, b, c);
                            break;
                        default:
                            printf("Choix non valide. Veuillez choisir une forme valide.\n");
                            break;
                    }
                    printf("Voulez-vous continuer ? (1 pour oui / 0 pour non) : ");
                    choix=scan();
                    system("cls");
                    if (choix != 1) {
                        break;
                    }
                }
                break;
            case 2:
                while(1) {
                    afficherFormes3D();
                    printf("\nchoisissez la forme que vous souhaitez :\n");
                    choix=scan();
                    system("cls");
                    switch (choix) {
                        case 4:
                            printf("Vous avez choisi la sphere.\n");
                            printf("\nEntrez le rayon de la sphere : ");
                            rayon=scan();
                            calculerSphere(rayon);
                            break;
                        case 5:
                            printf("Vous avez choisi le cube.\n");
                            printf("\nEntrez la longueur du cote du cube : ");
                            cote=scan();
                            calculerCube(cote);
                            break;
                        case 6:
                            printf("Vous avez choisi le cylindre.\n");
                            printf("\nEntrez le rayon du cylindre : ");
                            rayon=scan();
                            printf("Entrez la hauteur du cylindre : ");
                            hauteur=scan();
                            calculerCylindre(rayon, hauteur);
                            break;
                        case 7:
                            printf("Vous avez choisi la pyramide.\n");
                            printf("\nEntrez la longueur de la base de la pyramide : ");
                            longueur_base=scan();
                            printf("Entrez la hauteur de la pyramide : ");
                            hauteur=scan();
                            calculerPyramide(longueur_base, hauteur);
                            break;
                        default:
                            printf("Choix non valide. Veuillez choisir une forme valide.\n");
                            break;
                    }
                    printf("Voulez-vous continuer ? (1 pour oui / 0 pour non) : ");
                    choix=scan();
                    system("cls");
                    while(choix != 1 && choix != 0) {
                    	printf("Choix non valide. Veuillez entrer 1 pour oui ou 0 pour non.\n");
                    	printf("Voulez-vous continuer ? (1 pour oui / 0 pour non) : ");
                    	choix = scan();
                    	system("cls");
                    	}
                    	if (choix != 1) {
                        break;
                    }
                }
                break;
            default:
                printf("Choix invalide.\n");
                break;
}
}
}
