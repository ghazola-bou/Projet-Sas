#include <stdio.h>
#include <string.h>
#define max_contact 100

/*-------------------------------------Declaration-------------------------------------*/
typedef struct
{
    char name[max_contact];
    char prenom[max_contact];
    char telephone[max_contact];
    int age;
    char statut[max_contact];
    char date[11];
    int referanse;
} reservations;

reservations alldontist[100];

int contact = 0;
int i =0;

/*--------------------------fiunction Ajouter-------------------------------*/

void ajouter()
{
    if (contact >= max_contact)
    {
        printf("je ne peux pas en ajouter plus");
        return;
    }
    else
    {

        printf("referanse HA %d ", i + 1);
        // getchar();

        printf("\n Nom du patient :");
        scanf("%s", alldontist[contact].name);

        printf("prenom du patient :\n");
        scanf("%s", alldontist[contact].prenom);

        printf("telephone du patient 212:\n");
        scanf("%s", alldontist[contact].telephone);

        printf("age du patient :\n");
        scanf("%d", &alldontist[contact].age);

          printf("Statut (validé, reporté, annulé, traité): ");
        scanf("%s", alldontist[contact].statut);

        printf("Date (JJ/MM/AAAA): ");
        scanf("%s", alldontist[contact].date);
        // range(alldontist[contact].referanse);
        alldontist[contact].referanse = contact + 1;

        contact++;
        // printf("ref is REF%d",alldontist[contact].referanse);
        printf("le patient a ete ajoute avec succes  \n");
    }
}

// void range(int id[]){
//     sprintf(id,"%d  ",rand()%1000);

//}

/*-----------------------------------founctionModifier----------------------------------*/
void modifier()
{
    int Reference;
    int trouve = 0;
    printf("la reference de clion :");
    scanf("%d", &Reference);
    for (int i = 0; i < contact; i++)
    {

        if (alldontist[i].referanse == Reference)
        {
            printf("neme is %s", alldontist[i].name);
            trouve = 1;
        }
    }
    if (!trouve)
    {
        printf("client avec la reference %d non trouve .\n", Reference);
        return;
    }

    if (trouve)
    {
        int choix;
        do
        {
            printf("modifier les informations du client \n");
            printf("1- modifier name:");
            printf("2- modifier prenom: ");
            printf("3- modifier telephone:");
            printf("4- modifier age: ");
            printf("5- modifier statut :");
            printf("6- modifier date: ");
            printf("7- quittee :");
            scanf("%d", &choix);
            switch (choix)
            {
            case 1:
                printf("entrez le nouveau nom:");
                scanf("%s", alldontist[i].name);
                break;
            case 2:
                printf("entrez le nouveau prenome:");
                scanf("%s", alldontist[i].prenom);
                break;
            case 3:
                printf("entrez le nouveau telephone 212 :");
                scanf("%s", alldontist[i].telephone);
                break;
            case 4:
                printf("entrez le nouveau age:");
                scanf("%s", alldontist[i].age);
                break;
            case 5:
                printf("entrez le nouveau status (validé, reporté, annulé, traité)::");
                scanf("%s", alldontist[i].statut);
                break;
            case 6:
                printf("entrez le nouveau date [JJ/MM/AAAA]:");
                scanf("%s", alldontist[i].date);
                break;
            case 7:
                printf("quitter le programme");
                break;
            default:
                printf("pas dons le choix \n");
                break;
            }
        } while (choix != 7);
    }
}

/*-------------------------------------founction supprimer------------------------------------*/
void supprimer()
{
    char Name[15];
    printf("entree le nom du client a supprimer: ");
    scanf("%s", Name);

    for (int i = 0; i < contact; i++)
    {
        if (strcmp(alldontist[i].name, Name) == 0)
        {
            for (int j = i; j < contact - 1; j++)
            {
                alldontist[j] = alldontist[j + 1];
            }
            contact--;
            printf("Reservation supprimee \n");
            return;
        }
    }
}

/*-----------------------------founction Afficher -----------------------------------------------*/
void Afficher()
{
    for (int i = 0; i < contact; i++)
    {
        printf("reference: %d\n", alldontist[i].referanse);
        printf("name: %s \n", alldontist[i].name);
        printf("prenom: %s \n", alldontist[i].prenom);
        printf("telephone: %s \n", alldontist[i].telephone);
        printf("age: %d \n", alldontist[i].age);
        printf("statut: %s \n", alldontist[i].statut);
        printf("date:%s \n", alldontist[i].date);
        printf("\n------------------------------------------\n");
    }
}

/*----------------------------------- founctionRecherche ------------------------------------*/
void recherche()
{
    int Reference;
    char Name[max_contact];
    int choix;
    int trouve;
    do
    {
        printf("recherche les informations du client \n");
        printf("1- recherche  name:");
        printf("2- recherche   referanse: ");
        printf("3- Retour :");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            printf("enter la nom a trouve :");
            scanf("%s", Name);
            trouve =0;
            for (i = 0; i < contact; i++)
            {
                if (strcmp(alldontist[i].name,Name)==0)
                {
                    printf("reference: %d\n", alldontist[i].referanse);
                    printf("contact trouve Name %s", alldontist[i].name);
        printf("prenom: %s \n", alldontist[i].prenom);
        printf("telephone: %s \n", alldontist[i].telephone);
        printf("age: %d \n", alldontist[i].age);
        printf("statut: %s \n", alldontist[i].statut);
        printf("date:%s \n", alldontist[i].date);
                    trouve = 1;
                    break;
                }
            }
            if (!trouve)
            {
                printf("nome no trouve \n");
            }

            break;
        case 2:
            printf("enter la referanse de trouve :");
            scanf("%d",&Reference);

            trouve =0;

            for (i = 0; i < contact; i++)
            {
                if (alldontist[i].referanse == Reference)
                {
                    printf("referanse %d", alldontist[i].referanse);
                    printf("contact trouve Name %s", alldontist[i].name);
                    printf("prenom: %s \n", alldontist[i].prenom);
                    printf("telephone: %s \n", alldontist[i].telephone);
                    printf("age: %d \n", alldontist[i].age);
                    printf("statut: %s \n", alldontist[i].statut);
                    printf("date:%s \n", alldontist[i].date);
                    trouve =1;
                    break;

                }
            }

            if (!trouve)
            {
                printf("reference non trouvee.\n");
            }
            break;

        default:
            printf("numero non trouve.\n");
        }
    } while (choix != 3);
}

/*---------------------------------founctio Statistiques -------------------------------------*/
void  Statistiques() {
    int stati0_18 = 0, stati19_35 = 0, stati36Plus = 0;
    for (int i = 0; i <contact ; i++) {
        if (alldontist[i].age <= 18) {
            stati0_18++;
        } else if (alldontist[i].age <= 35) {
            stati19_35 ++;
        } else {
            stati36Plus++;
        }
    }
    printf("0-18 ans: %d\n", stati0_18);
    printf("19-35 ans: %d\n", stati19_35 );
    printf("36+ ans: %d\n", stati36Plus);
}

int main()
{

    int choix;
    do
    {
        printf("\n\n===============================================\n\n");
        printf("Menue :\n");
        printf("1- Ajouter une reservation : \n");
        printf("2- Modifier  : \n");
        printf("3-  supprimer : \n");
        printf("4- Afficher : \n");
        printf("5- Recherche des reservations : \n");
        printf("6-  Statistiques : \n");
        printf("7- exit \n");
        printf("\n\n===================================================\n\n");
        printf("Entrez la choix :");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            ajouter();
            break;
        case 2:
            modifier();
            break;
        case 3:
            supprimer();
            break;
        case 4:
            Afficher();
            break;
        case 5:
            recherche();
            break;
        case 6: Statistiques();
            break;
        case 7:
            printf("exit \n");
            break;
        default:
            printf("indisponible");
            break;
        }
    } while (choix != 7);

    return 0;
}