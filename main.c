#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//srand(time(NULL));
void reglejeu();
void joueur();
void jouer_IA_lvl1();
void jouer_IA_lvl2();
void jouer();
void credits();
int menu();
int affiche_b(int x);
char joueur1[20];
char joueur2[20];
int rep_ad =0;
int niv = 0;



int main()
{
int choix = menu();
if (choix == 1 ){
	printf("Votre nom \n");
	scanf("%s", &joueur1);
	printf("Vous jouez avec qui ? \n");
	printf("1- IA\n");
	printf("2- Une personne\n");
	scanf("%d", &rep_ad);
	while (rep_ad != 1 && rep_ad != 2){
        printf("Eh joe deconne paaas\n ");
        scanf ("%d", &rep_ad);
    }
    if (rep_ad == 2){
       	printf("Le nom du de l'adversaire\n");
        scanf("%s", &joueur2);
        jouer();
        }
    if (rep_ad == 1){
       	printf("Choisissez le niveau\n");
       	printf("1- Normale\n");
       	printf("2- Difficile\n");
        scanf("%d", &niv);
        while (niv != 1 && niv != 2){
            printf("Eh joe deconne paaas\n");
            scanf ("%d", &niv);
            }
        if (niv == 1){
            jouer_IA_lvl1();
        	}
        }
	}
else if (choix  == 2 ){
	reglejeu();
	menu();
    }
else if (choix  == 3 ){
	credits();
    }
    return 0;
}


int menu(){
    int rep;
    printf("***************************\n");
    printf("*         Welcome !       *\n");
    printf("***************************\n");
    printf("Faites un choix : \n");
    printf("1- Jouer \n");
    printf("2- Voir les regles du jeu \n");
    printf("3- Voir les credits \n");
    printf("4- Quitter \n");
    scanf ("%d", &rep);
    while (rep > 4 || rep == 0){
    printf("Eh joe deconne pas\n ");
    scanf ("%d", &rep);
    }
    if (rep == 1){
    	return rep;

    	}
    else if (rep == 2 ){
    	return rep;
    	}

    else if (rep == 3)
    {
    	return rep;
        credits();
    	}

    else if (rep == 4)
    {
        return 0;
    	}

}

void reglejeu(){


}

void jouer(){
	short player = 1;
    short wino=0;
    int  nbre_b = 30;
    int enlv_b = 0; // init
    affiche_b(nbre_b);
    while (wino == 0){
    	if (player == 1){
        	printf(" %s Combien d'allumette à enlever :  ", joueur1);
        	player = 2;
    	}
    	else if (player == 2){
        	printf(" %s Combien d'allumette à enlever :  ", joueur2);
        	player = 1;
    	}
    	scanf("%d", &enlv_b);
    	while (enlv_b > 3){
            printf(" Bro tu peux pas retirer plus de 3 Allumettes. Retapez :  ");
            scanf("%d", &enlv_b);
    	}
    	affiche_b(nbre_b - enlv_b);
    	nbre_b = nbre_b - enlv_b;
    if (nbre_b<=0){
        wino = 1;
        if (player == 1){
        printf("Le gagnant est %s", joueur1);
        }
        if (player == 2){
        printf("Le gagnant est %s", joueur2);
        }
        return 0;

    }

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

void jouer_IA_lvl1(){
    int n = rand()%3 +1;
	short player = 1;
    short wino=0;
    int  nbre_b = 30;
    int enlv_b = 0; // init
    affiche_b(nbre_b);
    while (wino == 0){
    	if (player == 1){
        	printf(" A vous de jouer : ");
            scanf("%d", &enlv_b);
            while (enlv_b > 3){
                printf(" Bro tu peux pas retirer plus de 3 Allumettes. Retapez :  ");
                scanf("%d", &enlv_b);
                }
            affiche_b(nbre_b - enlv_b);
            nbre_b = nbre_b - enlv_b;
            player = 2;
    	}
    	else if (player == 2){
            enlv_b = rand()%3 +1;
            printf(" IA_lvl 1 a retirer : %d\n", enlv_b);
            affiche_b(nbre_b - enlv_b);
            nbre_b = nbre_b - enlv_b;
            player =1;
            }

    if (nbre_b<=0){
        wino = 1;
        if (player == 1){
        printf("§§§§§ Vous avez gagné §§§§§" );
        }
        if (player == 2){
        printf("Pas de bol IA a gagné");
        }
        return 0;

        }
    }

}

void jouer_IA_lvl2(){

}

