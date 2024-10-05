#include <stdio.h>
#include <string.h>
#define max_contact 50

//-------------------------------------Declaration-------------------------------------/
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

//--------------------------fiunction Ajouter 10----------------------------/

void ajouter_10() {
    char default_names[10][max_contact] = {"ghizlane", "hamid", "samir", "hafida", "karima", "khalid", "ayoub", "latifa", "samira", "zaki"};
    char default_prenoms[10][max_contact] = {"omari", "sdiki", "fthi", "hadir", "nami", "fadili", "smiai", "fatimi", "amor", "alale"};
    char default_telephones[10][max_contact] = {"0612345678", "0623456789", "0634567890", "0645678901", "0656789012", "0667890123", "0678901234", "0689012345", "0690123456", "0601234567"};
    int default_ages[10] = {22, 30, 24, 19, 31, 24, 16, 19, 17, 40};
    char default_statuts[10][max_contact] = {"valide", "reporte", "valide", "annule", "traite", "valide", "reporte", "annule", "valide", "traite"};
    char default_dates[10][max_contact] = {"10/10/2024", "11/10/2024", "12/10/2024", "13/10/2024", "14/10/2024", "15/10/2024", "16/10/2024", "17/10/2024", "18/10/2024", "19/10/2024"};

    for (int i = 0; i < 10; i++) {

        strcpy(alldontist[contact].name, default_names[i]);
        strcpy(alldontist[contact].prenom, default_prenoms[i]);
        strcpy(alldontist[contact].telephone, default_telephones[i]);
        alldontist[contact].age = default_ages[i];
        strcpy(alldontist[contact].statut, default_statuts[i]);
        strcpy(alldontist[contact].date, default_dates[i]);
        alldontist[contact].referanse = contact + 1;
        contact++;
    }
}

//--------------------------fiunction Ajouter-------------------------------/

void ajouter()
{
    if (contact >= max_contact)
    {
        printf("je ne peux pas en ajouter plus");
        return;
    }
    else
    {

        printf("\nNom du patient :");
        scanf("%s", alldontist[contact].name);

        printf("prenom du patient :");
        scanf("%s", alldontist[contact].prenom);

        printf("telephone du patient 212:");
        scanf("%s", alldontist[contact].telephone);

        printf("age du patient :");
        scanf("%d", &alldontist[contact].age);

        printf("Statut (valide, reporte, annule, traite): ");
        scanf("%s", alldontist[contact].statut);

        printf("Date (JJ/MM/AAAA): ");
        scanf("%s", alldontist[contact].date);

        alldontist[contact].referanse = contact + 1;

        contact++;

        printf("le patient a ete ajoute avec succes  \n");
    }
}


//-----------------------------------founction Modifier----------------------------------/
void modifier()
{
    int Reference;
    int trouve = 0;
    printf("la reference de clion \n:");
    scanf("%d", &Reference);
    for (int i = 0; i < contact; i++)
    {

        if (alldontist[i].referanse == Reference)
        {
            printf("neme is %s \n", alldontist[i].name);
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
            printf("1- modifier name: \n");
            printf("2- modifier prenom: \n");
            printf("3- modifier telephone:\n");
            printf("4- modifier age: \n");
            printf("5- modifier statut \n:");
            printf("6- modifier date: \n");
            printf("7- quittee :\n");
            scanf("%d", &choix);
            switch (choix)
            {
            case 1:
                printf("entrez le nouveau nom \n:");
                scanf("%s", alldontist[i].name);
                break;
            case 2:
                printf("entrez le nouveau prenome \n:");
                scanf("%s", alldontist[i].prenom);
                break;
            case 3:
                printf("entrez le nouveau telephone 212 :\n");
                scanf("%s", alldontist[i].telephone);
                break;
            case 4:
                printf("entrez le nouveau age:\n");
                scanf("%d", &alldontist[i].age);
                break;
            case 5:
                printf("entrez le nouveau status \n 1- validé, 2- reporté, 3-annulé, 4-traité): \n");
                scanf("%s", alldontist[i].statut);
                break;
            case 6:
                printf("entrez le nouveau date [JJ/MM/AAAA]: \n");
                scanf("%s", alldontist[i].date);
                break;
            case 7:
                printf("quitter le programme\n");
                break;
            default:
                printf("pas dons le choix \n");
                break;
            }
        } while (choix != 7);
    }
}

//-------------------------------------founction supprimer------------------------------------/
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

//-----------------------------founction Afficher -----------------------------------------------/
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

//----------------------------------- founction Recherche ------------------------------------/
void recherche()
{
    int Reference;
    char Name[max_contact];
    int choix;
    int trouve;
    do
    {
        printf("recherche les informations du client \n");
        printf("1- recherche  name: \n");
        printf("2- recherche   referanse: \n");
        printf("3- Retour :\n");
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
                    printf("referanse %d \n", alldontist[i].referanse);
                    printf("contact trouve Name %s \n", alldontist[i].name);
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
//--------------------------founction  réservations_tri------------------------------------/
            //tre name;
void refervationds(){
    reservations temp;
    int choix;
    do{
         printf(" 1- refervationds_name :");
         printf(" 2- refervationds_statut :");
         printf("3- exit \n");
         printf("Entrez la choix :");
         scanf("%d", &choix);

         switch(choix)
         {
         case 1 :
          for(int i=0;i<contact-1;i++){
        for(int j=0;j<contact-i-1;j++){
            if(strcmp(alldontist[j].name,alldontist[j+1].name)>0){
                temp = alldontist[j];
                alldontist[j]=alldontist[j+1];
                alldontist[j+1] = temp;

            }
        }
    }
    printf("reservation par name :");
    for(int i=0;i<contact;i++){
        printf("%s \n",alldontist[i].name);
    }
            break;


    case 2:
         for(int i =0;i<contact-1;i++){
        for(int j=0;j<contact-i-1;j++){
            if(strcmp(alldontist[j].statut,alldontist[j+1].statut)>0){
                temp = alldontist[j];
                alldontist[j] = alldontist[j+1];
                alldontist[j+1] = temp;
            }
        }
    }

    printf("reservation par status ");
    for(int i=0;i<contact;i++){
        printf("%s \n",alldontist[i].statut);
    }

       break;
    case 3:
     printf("Sortie du programme.\n");
    break;
         default:
                printf("indisponible");
            break;
         }



    }while(choix !=3);


}
//---------------------------------founctio Statistiques -------------------------------------/


void  Statistiques() {
    int choix;
    int stati0_18 = 0, stati19_35 = 0, stati36Plus = 0;
    float totalage =0;
    int valide =0 ,annule =0, reporte =0 ,  traite = 0;

    do{
        printf("1- la moyenne d Age des patients ayant réservé.\n");
        printf("2- le nombre de patients par tranche d Age (ex. : 0-18 ans, 19-35 ans, 36+ ans).\n");
        printf("3- des statistiques pour connaître le nombre total de réservations par statut (valide, annule, etc.\n");
        printf("4- exit \n");
        printf("Entrez la choix \n:");
        scanf("%d", &choix);


        switch (choix)
    {
    case 1:
         for(int i =0;i<contact;i++){
            totalage += alldontist[i].age;
         }
         printf("La moyenne d age est : %.2f\n",totalage / contact);


        break;
    case 2 :
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
         break;
         case 3 :
            for(int i=0; i<contact;i++){
                if(strcmp(alldontist[i].statut,"valide")==0){
                    valide++;
                }
                for(int i=0;i<contact;i++){
                    if(strcmp(alldontist[i].statut, "annule")==0){
                        annule++;
                    }
                }
                for(int i=0;i<contact;i++){
                    if(strcmp(alldontist[i].statut,"reporte")==0){
                        reporte++;
                    }
                }
                for(int i=0;i<contact;i++){
                    if(strcmp(alldontist[i].statut,"traite")){
                        traite++;
                    }
                }

            }
                printf("valide :%d \n",valide);
                printf("annule :%d \n",annule);
                printf("reporte :%d \n",reporte);
                printf("traite :%d \n",traite);
         break;

         case 4:
             printf("Sortie du programme.\n");
         break;
    default:
            ("indisponible");
        break;
    }

    }while(choix !=4);

}

int main()
{
ajouter_10();
    int choix;
    do
    {
        printf("\n===============================================\n\n");
        printf("Menue :\n");
        printf("1- Ajouter une reservation : \n");
        printf("2- Modifier  : \n");
        printf("3-  supprimer : \n");
        printf("4- Afficher : \n");
        printf("5- Recherche des reservations : \n");
        printf("6- refervationds :\n");
        printf("7-  Statistiques : \n");
        printf("8- exit \n");
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
        case 6:refervationds();
            break;
        case 7: Statistiques();
            break;
        case 8:
            printf("exit \n");
            break;
        default:
            printf("indisponible");
            break;
        }
    } while (choix !=8 );

    return 0;