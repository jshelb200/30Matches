#include <stdio.h>
#include <stdlib.h>
void reglejeu();
void jouer();
void credits();
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
    }

    if (rep == 3)
    {
        credits();
    }

    if (rep == 4)

    {
        return 0;
    }


}

void reglejeu(){


}


void jouer(){


}

void credits(){


}

