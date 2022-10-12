#include <stdio.h>
#include <stdlib.h>
void reglejeu();
void joueur();
void jouer();
void credits();
int affiche_b(int x);
int main()
{
    menu();
    return 0;
}

void menu(){
    int rep;
    printf("***************************\n");
    printf("*         Welcome !       *\n");
    printf("***************************\n");
    printf("Faites un choix : \n");
    printf("1- Jouer \n");
    printf("2- Voir les regles du jeu \n ");
    printf("3- Voir les credits \n");
    printf("4- Quitter \n");
    scanf ("%d", &rep);
    while (rep > 4 || rep == 0){
    printf("Eh joe deconne pas\n ");
    scanf ("%d", &rep);
    }
        if (rep == 1)
    {
        jouer();
    }
    if (rep == 2 ){
        reglejeu();
        menu();
    }

    if (rep == 3)
    {
        credits();
        menu();
    }

    if (rep == 4)

    {
        return 0;
    }

}

void reglejeu(){


}

void jouer(){
    short wino=0;
    int  nbre_b = 30;
    int enlv_b = 0; // init
    affiche_b(nbre_b);
    while (wino == 0){

    printf("\n Combien d'allumette à enlever :  ");
    scanf("%d", &enlv_b);
    affiche_b( nbre_b - enlv_b);
    nbre_b = nbre_b - enlv_b;
    if (nbre_b==0){
        wino =1;
        printf("Nous avons un gagnant");
        return 0;

    }

    }


}

void joueur(){
	char joueur1[20];
	char joueur2[20];
	int rep_ad =0;
	printf("Votre nom \n");
    scanf("%c", &joueur1);
    printf("Vous jouez avec qui ? \n");
    printf("1- IA\n");
    printf("2- Une personne\n");
    scanf("%d", &rep_ad);
    while (rep_ad != 1 || rep_ad != 0){
    printf("Eh joe deconne pas\n ");
    scanf ("%d", &rep_ad);
    }

}

void credits(){


}
int affiche_b( int x){
    for (int i = 0; i < x; i++){
        printf("|");
    }
    return 0;
}

