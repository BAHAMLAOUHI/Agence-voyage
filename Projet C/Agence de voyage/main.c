#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
#include <conio.h>
#include<time.h>


// LES FONCTIONS DU MESSAGES
// cette procedure pour afficher un message decoratif de '-' ( bienvenue) .

void message(){
  int i, j;
  printf("\n\n\n");

  for (i = 1; i <= 10; i++)
  {
    printf("            ");
    for (j = 1; j <= 50; j++)
    {
      if (i == 1 || i == 10 || j == 1 || j == 50)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");

    if (i == 5)
    {
      printf("            *                                  1-Enter (1) as a client                                        *\n");
      printf("            *                                  2-Enter (2) as an admin                                        *\n");
    }
  }
  printf("\n\n\n");
}

// cette procedure afficher un message ( case 1// case 2 ) dans un cadre decoratif de '*' .
void decorate_message(char* message) {
  int message_length = strlen(message);
  int num_dashes = message_length + 4;
  int half_num_dashes = num_dashes / 2;
printf("                                     ");
  // Print top row of dashes
  int i;
  for (i = 0; i < num_dashes; i++) {

    printf("-");
  }
  printf("\n");

  // Print message with leading and trailing spaces
  printf("                                     ");
  printf("- %s -\n", message);
  int j;
  // Print bottom row of dashes
  printf("                                     ");

  for (j = 0; j < num_dashes; j++) {
    printf("-");
  }
  printf("\n");
}




  //declaration de type flight
typedef struct {
   char description [150]; // une chaine qui décrit les vols disponibles
   float price ;
}flight ;

  //declaration de type voyage
typedef struct {
   int id ;
   char destination[20];
   char date[25] ;
   flight ticket   ;
   bool premium ;
   char hotel[50] ;
   int nb_days ;
   int nb_per ;
   char nom[50] ;
   char prenom[50] ;
   long int num;
   char mail[50] ;
   char adresse[50] ;
   float cost ;
}voyage ;


  // pour declancher une erreur si les paramètres sont fausses
int length(voyage [200]);
void ajout_voyage(voyage[200]);
void panier(voyage [200]) ;


  // declaration de fonction qui retourne le longueur du tableau // gdsh mn voyage
int length(voyage lv[200]){
   int i=0;
   while (lv[i].id!=0){
      i++;
   }return i ;
}

  // declaration de ajout_voyage //1111111111111111111
void ajout_voyage(voyage lv[200] ){

   int choix ;
   voyage voy;
   char date[25];
   char reponse;
   voyage *p_voy=&voy ;
   voyage *p_case=&lv[length(lv)];
   int k=1;


                //choix de destination //
    //affichage
    while (k==1) {
   do
   {
    printf("\n\t_____________________________________");
    printf("\n\tVEUILLEZ CHOISIR UNE DESTINATION :\n");
    printf("\t\t1.France \n");
    printf("\t\t2.Germany \n");
    printf("\t\t3.Italy \n");
    printf("\t\t4.Canada \n");
    printf("\t\t5.switzerland \n\t");
    printf("_______________________________________\n\tTA REPONSE : ");
    scanf("%d",&choix) ;
    if (choix<=0||choix>5){
       printf("\a");  }
    system("cls");
    }while(choix<=0||choix>5);
     //affectation
   switch(choix)
   {
   case 1 :
      strcpy(voy.destination ,"France" );
      break ;
   case 2 :
      strcpy(voy.destination ,"Germany" );
      break ;
   case 3 :
      strcpy(voy.destination ,"Italy") ;
      break ;
   case 4 :
      strcpy(voy.destination ,"Canada" );
      break ;
   case 5 :
      strcpy(voy.destination ,"switzerland") ;
      break ;
   }

                 //saisie de date //
   printf("\n\n\tveuillez saisir la date sous la forme (jj/mm/aaaa) :");
   getchar();
   fgets(date,25,stdin);
   strcpy(voy.date,date);
   system("cls") ;

               //affichage de vols disponibles //
   do
   {
    printf("\n\t___________________________________________________________________");
    printf("\n\tLES VOLS DISPONIBLES  :\n");
    printf("\t\t1.Line : TUNISAIR      Departure : 08.30 AM  Price : 600dt  \n");
    printf("\t\t2.Line : NOVELAIR      Departure : 00.30 AM  Price : 500dt  \n");
    printf("\t\t3.Line : QatarAIRWAYS  Departure : 01.45 PM  Price : 700dt  \n");
    printf("\t___________________________________________________________________\n\tTA REPONSE : ");
    scanf("%d",&choix);
    if (choix<=0||choix>3){
       printf("\a");
    }system("cls");
   }while(choix<=0||choix>3);
   switch(choix) {
      case 1 :
        strcpy(voy.ticket.description,"Line            : TUNISAIR\n\tDeparture       : 08.30 AM");
        voy.ticket.price=600;
        break ;
      case 2 :
        strcpy(voy.ticket.description,"Line            : NOVELAIR\n\tDeparture       : 00.30 AM ");
        voy.ticket.price=500;
        break ;
      case 3 :
        strcpy(voy.ticket.description,"Line            : QatarAIRWAYS\n\tDeparture   : 01.45 PM ");
        voy.ticket.price=700;
        break ;
   }

         // premium ou economic ??//
   printf("\n\t___________________________________________________________________");
   printf("\n\tvoulez-vous un billet premium ? vous devez payer 300dt\n\tveuilez repondre par o(oui) ou n(non) :");
   getchar();
   scanf("%c",&reponse) ;
   voy.premium=(reponse=='o')?true:false;
   system("cls");

         //affichage des hotels
   do
   {
    printf("\n\t_______________________________________________");
    printf("\n\tVEUILLEZ CHOISIR UN HOTEL :\n");
    printf("\t\t1.Palazzo hotel      Price : 50dt/jour \n");
    printf("\t\t2.Shangri-LA hotel   Price : 50dt/jour \n");
    printf("\t\t3.Wonder hotel       Price : 50dt/jour \n");
    printf("\t\t4.Lago hotel         Price : 50dt/jour \n");
    printf("\t_______________________________________________\n\tTA REPONSE : ");
    scanf("%d",&choix) ;
    if(choix<=0||choix>4)
      {
       printf("\a");
      }system("cls");
   }while(choix<=0||choix>4);

   switch(choix)
   {
      case 1 :
        strcpy(voy.hotel,"Palazzo hotel");
        break ;
      case 2 :
        strcpy(voy.hotel,"Shangri-LA hotel");
        break ;
      case 3 :
        strcpy(voy.hotel,"Wonder hotel");
        break ;
      case 4 :
        strcpy(voy.hotel,"Lago hotel");
        break ;
   }
           //saisie de nombre de jours
   printf("\n\t___________________________________________________________________");
   printf("\n\tCombien de jours comptez-vous rester ?");
   scanf("%d",&voy.nb_days) ;
   system("cls");

           // saisie de nombre de personne
   printf("\n\t___________________________________________________________________");
   printf("\n\tquel est le nombre de personne  ?");
   scanf("%d",&voy.nb_per) ;
   system("cls");

         // calcul de cout total

   voy.cost=(50*voy.nb_days + voy.ticket.price + 300*voy.premium)*voy.nb_per ;
   printf("\n\tle total est : %.3f dt\n\tvoulez-vous confirmer l\'achat ?\n\tveuilez repondre par o(oui) ou n(non) : ",voy.cost) ;
        // finaliser l'achat
   getchar();
   scanf("%c",&reponse) ;
   system("cls");
   if(reponse=='o') {
      // affectation id
      srand(time(0));
      voy.id= (rand()%10000) +1;
      // saisie de coordonées
      printf("\n\t___________________________________________________________________");
      printf("\n\tvotre nom          :  ");
      getchar();
      fgets(voy.nom,50,stdin) ;
      printf("\n\tvotre prénom       :  ");
      getchar();
      fgets(voy.prenom,50,stdin) ;
      printf("\n\tvotre numéro       :  ");
      scanf("%ld",&voy.num) ;
      printf("\n\tvotre mail         :  ");
      getchar();
      fgets(voy.mail,50,stdin) ;
      printf("\n\tvotre adresse      :  ");
      getchar();
      fgets(voy.adresse,50,stdin) ;
      system("cls") ;
      *p_case=*p_voy ;
      printf("\n\t_____________________________");
      printf("\n\t  BOOKING WAS SUCCESSFUL! \n");
      printf("\t_____________________________");
   }
    printf("\n\n\t WOULD YOU LIKE TO BOOK ANOTHER TRIP ?   ");
   printf("\n\t THEN PRESS 1 ELSE PRESS 0 : ");
   scanf("%d",&k);
   system("cls") ;
}

}


   // declaration de panier 222222222222222222222 afficher la description d'un voyage
void panier(voyage lv[200] ) {
    int i;
   if (length(lv)==0) {
      printf("\n\t___Ton panier est vide !\n\t vous n'avez aucun voyage reserve____ ");
   }else {
     for ( i=0;i<length(lv);i++) {
      printf("\n\tVOS COORDONNEES : ");
      printf("\n\t________________________________________") ;
      printf("\n\tNOM             : %s",lv[i].nom);
      printf("\tPRENOM          : %s",lv[i].prenom);
      printf("\tNUMERO          : %ld",lv[i].num);
      printf("\n\tMAIL            : %s",lv[i].mail);
      printf("\tADRESSE         : %s",lv[i].adresse);
      printf("\t________________________________________") ;
      printf("\n\tVOTRE VOYAGE : ");
      printf("\n\t________________________________________") ;
      printf("\n\tID              : %d",lv[i].id);
      printf("\n\tDESTINATION     : %s",lv[i].destination);
      printf("\n\tDATE            : %s",lv[i].date);
      printf("\t%s",lv[i].ticket.description);
      if(lv[i].premium==1) {
        printf("\n\tTICKET          : premium");
      }else {
        printf("\n\tTICKET          : économique ");
      }
      printf("\n\tHOTEL           : %s",lv[i].hotel);
      printf("\n\tNOMBRE DE JOURS : %d",lv[i].nb_days);
      printf("\n\tNOMBRE DE PERS  : %d",lv[i].nb_per);
      printf("\n\tPRIX TOTAL      : %.3f",lv[i].cost);
      printf("\n***********************************************************\n");
     }
   }
}

  //
//tester si lidentifiant exixte ou non (( utiliser dans la modification pour verifier s'il existe ou non
int existe(int x,voyage lv [200]){
    int i=0 ;
    for (i=0;i<length(lv);i++)
        if (lv[i].id==x){
                i=1;}

      return i;
    }
// fonction qui retourne le placement du voyage a changer dans le tableau
int la_case_du_voyage_a_changer(voyage lv[200],int x){
    int i;
    int y;
    for(i=0;i<length(lv);i++) {
         if (lv[i].id==x){
               y=i;}


    }

}

// 3333333333333333333333333333333333 fonction qui modifie le voyage dans le panier
void modif(voyage lv[200]){


    int choix;
    int id;
if (length(lv)!=0) {
        printf ("\t |**************  bonjour Cher client  *************| \n ");
       printf ("\t |*******  voici les voyage dans votre panier ******|\n ");
      panier(lv);
        do{
            printf("\t |  s'il vous plais entrer l'identifiant du voyage  |\n "
                   "\t |sur lequel vous souhaitez apporter des changements| \n ");
               printf ("\t-----------------------------------------------------\n");
               printf("\t                 votre reponse :");
                scanf("%d",&id);
          }  while ((id>10000)&&(id>0));
       if (existe(id,lv)==0)
           printf ("\t   le voyage que vous cherchez n'existe pas \n");
           system("cls");


                            //emplacement du case
     int case_id;
     case_id=la_case_du_voyage_a_changer(lv,id);
do{
    printf ("\t  _______________________________________________\n");
   printf (" \t  ...............................................\n");
   printf (" \t  _______________________________________________\n");
   printf (" \t  | 1) hotel                                  |\n          | 2) type de voyage (premium ou economique) | \n          | 3) nombre de jour                         |\n"
           "          | 4) nom                                    |\n          | 5) prenom                                 |\n       "
           "   | 6) numero du telephone                    |\n          | 7) adresse mail                           |\n          | 8) adresse                                |\n          | 9) exite                                  |\n");
    printf ("\t    _______________________________________________\n");
   printf (" \t   ...............................................\n");
   printf ("\t    _______________________________________________\n");

printf ("\t|  s'il vous plait choisisser la case a changer    |     \n ");
printf ("\t-----------------------------------------------------\n");
 printf("\t                 votre reponse :");

scanf("%d",&choix);
 system("cls");
}while((choix<0)||(choix>9));



 char str[50];

    char str6[50];
    char str7[50];
    char str8[50];
    char nv_adresse[50];
    char nv_mail[50];
    char str2[50];
    char nv_nom[50];
    char nv_prenom[50];
    int nvhotel;

   long long  nv_numero ;
    switch(choix)
    {
        case 1 :
            printf("\t si vous voulez changer l'hotel\n");
            printf ("\t s'il vous plaît choisissez parmi ces hôtels\n ");
             printf("\n\t_______________________________________________");
             printf("\n\tVEUILLEZ CHOISIR UN HOTEL :\n");
             printf("\t\t1.Palazzo hotel      Price : 50dt/jour \n");
             printf("\t\t2.Shangri-LA hotel   Price : 50dt/jour \n");
             printf("\t\t3.Wonder hotel       Price : 50dt/jour \n");
             printf("\t\t4.Lago hotel         Price : 50dt/jour \n");
             printf("\t_______________________________________________\n\tTA REPONSE : \n ");
            int nvhotel;
            printf ("\t-----------------------------------------------------\n");
             printf("\t                 votre reponse :");

             scanf("%d",&nvhotel);

                 if(nvhotel<=0||nvhotel>4)
                  {
                    printf("\a");
                   }
                   while(nvhotel<=0|| nvhotel >4);
//remplisage
   switch(nvhotel)
   {
      case 1 :
        strcpy(lv[case_id].hotel,"Palazzo hotel");
        break ;
      case 2 :
        strcpy(lv[case_id].hotel,"Shangri-LA hotel");
        break ;
      case 3 :
        strcpy(lv[case_id].hotel,"Wonder hotel");
        break ;
      case 4 :
        strcpy(lv[case_id].hotel,"Lago hotel");
        break ;
       }

              printf (" \t  l'operation a ete effectuée avec succes");
             break;

        case 2:
           printf(" \t  choisissezle type de voyage que vous voulez changer  \n ecrire : o si vous voulez  <premium> ou n si vous voulez <economique>\n");
           printf ("\t-----------------------------------------------------\n");
           printf("\t votre reponse :");
            char typ_voyage [50];
              scanf("%s", typ_voyage);
               getchar();

              lv[case_id].premium=(*typ_voyage=='o')?true:false;

              printf (" \t    l'operation a ete effectuee avec succes");
              system("cls");

             break;

        case 3:

             printf("\t  si vous voulez changer le nombre de jour reserver a l'hotel \n\t  taper oui \n");
                printf("\t  votre reponse :");
              char str3[50];

            scanf("%s", str3);
              if (strcmp(str3,"oui") == 0){
              printf ("\t  taper le nombre de jour\n");
              printf("\t  votre reponse :");
                     scanf ("%d",&lv[case_id].nb_days);

                     printf (" \t  l'operation a ete effectuée avec succes\n");
              }
              printf ("\tmerci bien pour votre temps\n");
            /* voyage_a_changer.nbjours=nbrj */

            break;

        case 4 :
           printf("\t   si vous voulez vraiment changer le nom \n"
                    "\t   taper oui");
               scanf("%s", str);
              if (strcmp(str,"oui") == 0){

                   printf ("\t s'il vous plait donner le nouveau nom");
                   printf ("\t-----------------------------------------------------\n");
                    printf("\t                 votre reponse :");
                    scanf("%s",lv[case_id].nom );
                   /* voyage_a_changer.nom=nom */
                  printf (" \t    l'operation a ete effectuée avec succes");
              }
              else
              printf ("\t    désolé pouvez_vous essayer autre chose ");

            break;
        case 5 :
             printf("\t si vous voulez vraiment changer le prenom \n"
                    "\t        taper oui");
               scanf("%s", str2);
              if (strcmp(str2,"oui") == 0){

                   printf ("\t  s'il vous plait donner le nouveau prenom");
                   printf ("\t-----------------------------------------------------\n");
                   printf("\t                 votre reponse :");
                    scanf("%s", lv[case_id].prenom);
                   /* voyage_a_changer.prenom=prenom */
                  printf (" \t  l'operation a ete effectuée avec succes");
              }
              else
              printf ("  \t désolé pouvez_vous essayer autre chose");

            break;
        case 6 :
            printf("\t  si vous voulez vraiment changer le numeo de telephone \n"
                    "\t  taper oui");
               scanf("%s", str6);
              if (strcmp(str6,"oui") == 0){

                   printf ("\t  s'il vous plait donner le nouveau numero");
                   printf ("\t-----------------------------------------------------\n");
                    printf("\t                 votre reponse :");
                   scanf ("%li",&lv[case_id].num);
                   /* voyage_a_changer.numero_telephone=nv_numero */
                  printf ("\t  l'operation a ete effectuée avec succes");
              }
              else
              printf ("\t désolé pouvez_vous essayer autre chose ");

             break;
         case 7 :
             printf("\t  si vous voulez vraiment changer le mail \n"
                    "\t         taper oui");
               scanf("%s", str7);
              if (strcmp(str7,"oui") == 0){

                   printf ("\t   s'il vous plait donner le nouveau mail");
                   printf ("\t-----------------------------------------------------\n");
                   printf("\t                 votre reponse :");
                    scanf("%s", lv[case_id].mail);
                   /* voyage_a_changer.mail=nv_mail */
                  printf ("\t   l'operation a ete effectuée avec succes");
              }
              else
              printf ("\t  désolé pouvez_vous essayer autre chose ");

            break;
        case 8 :
             printf("\t si vous voulez vraiment changer l'adresse \n"
                    "\t          taper oui");
               scanf("%s", str8);
              if (strcmp(str8,"oui") == 0){

                   printf ("\t s'il vous plait donner le nouveau adresse");
                   printf ("\t-----------------------------------------------------\n");
                    printf("\t                 votre reponse :");
                   scanf("%s", lv[case_id].adresse);
                   /* voyage_a_changer.adresse=nv_adresse */
                  printf (" \t l'operation a ete effectuée avec succes");
              }
              else
              printf ("\t désolé pouvez_vous essayer autre chose ");

            break;
        case 9 :
            printf("\t L'impulsion du voyage est l'un des plus encourageants symptômes de la vie");
           break;


        default:
         printf("\t Error essayer autre chose");
    }
}
else {
    printf("\n\t cher client il faut reserver des voyages\n\t avant d'effectuer des modifications\n");
}

}
// 44444444444444444 pour supprimer un voyage
void supprimer (voyage lv[200]) {
    int choix;
    int id;
      // panier(lv);
if (length(lv)!=0){
printf ("\t |**************  bonjour Cher client  *************| \n ");
printf ("\t |*******  voici les voyage dans votre panier ******|\n ");
panier(lv);
  do{
 printf("\t |  s'il vous plais entrer l'identifiant du voyage  |\n "
 "\t |sur lequel vous souhaitez apporter des changements| \n ");
 printf ("\t-----------------------------------------------------\n");
 printf("\t                 votre reponse :");
 scanf("%d",&id);
} while ((id>10000)&&(id>0));
  if (existe(id,lv)==0)
    printf ("\t   le voyage que vous cherchez n'existe pas \n");



                            //emplacement du case
     int case_id,i;
     case_id=la_case_du_voyage_a_changer(lv,id);
      for(i = case_id; i < length(lv)- 1; i++)
      lv[i] = lv[i + 1];

}
else {
    printf ("\n\t  il n'y a aucun contenu pour l'effacer.\n");
}
}

//555555555555555555555555555555 la recherche d'un voyage

// on definit une structure voyage pour la procedure rechercher.
typedef struct
{
    char depart[10];
    char arrive[10];
    char date[12];
} voyagee;



void rechercher1(char nomfich[]) // cette procedure sert a rechercher les voyages disponibles d'une date precise dans un FICHIER de voyages.
{
     char datee[20];
    printf(
           "           NOTER BIEN : les dates disponibles a cet instant sont\n\n"
           "           -----------------------------------------------------\n"
           "           | 13/01/2023 | 26/02/2023 | 20/04/2023 | 15/05/2023 |\n"
           "           -----------------------------------------------------\n\n\n"
           "           Veuiller saisir la date de voyage sous la forme 'jj/mm/aaaa' :\n");
           printf("                        TA REPONSE : ");

    scanf("%s",datee);
system("cls");
voyagee v;
int test; //cette variabel est destin e pour afficher un message lorsque la date nexiste pas
int entree4; // cette variable sert aa chercher de nouveau ou quitter
FILE* fichier= NULL;
fichier = fopen(nomfich,"r");
test=0;
if (fichier != NULL)
{
   while (fscanf(fichier,"%s %s %s \n",v.depart,v.arrive,v.date)!=EOF)
    {
                      if (strcmp(datee,v.date)==0){
            printf("\n le depart : %s \n l'arrive : %s \n dans la date de : %s \n",v.depart,v.arrive,v.date);
            test=1 ;}



    }
     if (test==0){
                printf(" il n'exsite pas a cet instant un voyage pour la date : %s\n ",datee);
     }
     do {
   printf("\n***************************************************************\n\n"
          "      ------ (1) pour chercher d'autres voyages ------\n"
          "       ----- (0) pour acceder a la page precedente -----\n\n"
          "***************************************************************\n");

        scanf("%d",&entree4);
        system("cls");}while ((entree4!=1)&&(entree4!=0));
        switch(entree4){
        case 1 :{
                  rechercher1("basededonnee");}
        case 0 :break;}

}
fclose(fichier);
system("color 9");
}

// cette procedure sert a rechercher les voyages disponibles entre deux dates precise dans un FICHIER de voyages.
void rechercher(char nomfich[])
{
    char datee0[20],datee1[20];
     int day0, month0, year0;
    int day1, month1, year1;
    int day2, month2, year2;


    printf(
           "           NOTER BIEN : les dates disponibles a cet instant sont\n\n"
           "           -----------------------------------------------------\n"
           "           | 13/01/2023 | 26/02/2023 | 20/04/2023 | 15/05/2023 |\n"
           "           -----------------------------------------------------\n\n\n"
           "   Veuiller saisir la date N:1 de voyage sous la forme 'jj/mm/aaaa' :\n");
           printf("                  TA REPONSE : ");

    scanf("%s",datee0);

     printf("  Veuiller saisir la date N:2 de voyage sous la forme 'jj/mm/aaaa' :\n");
      printf("                  TA REPONSE : ");
     scanf("%s",datee1);
    system("cls");

    sscanf(datee0, "%d/%d/%d", &day1, &month1, &year1);
    sscanf(datee1, "%d/%d/%d", &day2, &month2, &year2);
voyagee v;
//cette variabel est destin e pour afficher un message lorsque la date nexiste pas
int test;
// cette variable sert aa chercher de nouveau ou quitter
int entree4;
FILE* fichier= NULL;
fichier = fopen(nomfich,"r");
test=0;
if (fichier != NULL)
{
   while (fscanf(fichier,"%s %s %s \n",v.depart,v.arrive,v.date)!=EOF)
    {
        sscanf(v.date, "%d/%d/%d", &day0, &month0, &year0);

// Check if the date falls within the given range
    if (year0 > year1 && year0 < year2)
    {
        printf("\n le depart : %s \n l'arrive : %s \n dans la date de : %s \n",v.depart,v.arrive,v.date);
                            printf(" _____________________________________________\n");
            test=1 ;
    }
    else if (year0 == year1 && year0 == year2)
    {
        if (month0 > month1 && month0 < month2)
        {
        printf("\n le depart : %s \n l'arrive : %s \n dans la date de : %s \n",v.depart,v.arrive,v.date);
                            printf(" _____________________________________________\n");
            test=1 ;
        }
        else if (month0 == month1 && month0 == month2)
        {
            if (day0 > day1 && day0 < day2)
            {
        printf("\n le depart : %s \n l'arrive : %s \n dans la date de : %s \n",v.depart,v.arrive,v.date);
                            printf(" _____________________________________________\n");
            test=1 ;
            }
            else if (day0 == day1 && day0 == day2)
            {
        printf("\n le depart : %s \n l'arrive : %s \n dans la date de : %s \n",v.depart,v.arrive,v.date);
                            printf(" _____________________________________________\n");
            test=1 ;
            }
        }
    }

    }
     if (test==0){
                printf(" il n'exsite pas a cet instant un voyage entre la date : %s et la date : %s \n ",datee0,datee1);
     }
     if (test==1){
               printf(" Voila les voyages disponible entre la date : %s et la date : %s \n ",datee0,datee1);
     }
     do {
   printf("\n***************************************************************\n\n"
          "      ------ (1) pour chercher d'autres voyages ------\n"
           "       ----- (0) pour acceder a la page precedente -----\n\n"
          "***************************************************************\n");

        scanf("%d",&entree4);
        system("cls");}while ((entree4!=1)&&(entree4!=0));

        switch(entree4){
        case 1 :{
                  rechercher("basededonnee");}
        case 0 :
            system("exit");}

}
fclose(fichier);
}

//pour la partie adminnn
// sert a ajouter un voyage dans la base de donnee.
void saisir(char nomfich[])
{
    voyagee v;
FILE* fichier= NULL;
fichier = fopen(nomfich,"a");
if (fichier != NULL)
{
    printf("saisir la depart: \n");
    fflush(stdin);
    scanf("%s",v.depart);
    printf("saisir la destination : \n");
    fflush(stdin);
    scanf("%s",v.arrive);
    printf("saisir la date de la forme jj/mm/aaaa: \n");
    scanf("%s",v.date);
    fprintf(fichier,"%s %s %s \n",v.depart,v.arrive,v.date);
}
fclose(fichier);
}


// pour afficher les boyages disponibles
void afficher(char nomfich[])
{
voyagee v;
FILE* fichier= NULL;
fichier = fopen(nomfich,"r");
if (fichier != NULL)
{
   while (fscanf(fichier,"%s %s %s \n",v.depart,v.arrive,v.date)!=EOF)
    {

            printf("\n le depart : %s || la destination : %s || la date : %s \n",v.depart,v.arrive,v.date);
            printf("------------------------------------------------------------------\n");

    }
}
fclose(fichier);
}



int main(){
     voyage liste_voyages[200];
     int entree1;
     int truee=1;
     //pour la partie admin
     int n,nbvoy,i;
 do{
    do{
    decorate_message("Bienvenu dans notre agence de voyage TUNISAIR_ENSI");
    message();
    printf("                                        -------------------------------------------\n\t                               TA REPONSE : ");
    scanf("%d",&entree1);
    system("cls");}while (entree1!=1 && entree1!=2);

    switch(entree1){
        int choix;
        int choix3;
        int choix4;

    case 1:
        while (truee==1) {
            do{
                    decorate_message("Bienvenu dans notre agence de voyage TUNISAIR_ENSI ");
    printf("\n\n\n                                        -------------------------------------------\n");
    printf("\n\t                                   SAISIR(1) : pour saisir un voyage. \n");
    printf("\t                                   SAISIR(2) : pour afficher le panier. \n");
    printf("\t                                   SAISIR(3) : pour chercher un voyage. \n\n");
    printf("                                        -------------------------------------------\n\t                               TA REPONSE : ");
             scanf("%d",&choix);
             system("cls");}while (choix>3 || choix<1);

             switch(choix){
                 int choix2;
             case 1:
                 ajout_voyage(liste_voyages);
                 break ;
             case 2:
                 do{decorate_message("Bienvenu dans notre agence de voyage TUNISAIR_ENSI ");
    printf("\n\n\n                                    ******************************************************\n");
    printf("\n\t                               SAISIR(1) : pour afficher la description d'un voyage. \n");
    printf("\t                               SAISIR(2) : pour supprimer un voyage. \n");
    printf("\t                               SAISIR(3) : pour modifier un voyage. \n\n");
    printf("                                    ******************************************************\n\t                               TA REPONSE : ");
    scanf("%d",&choix2);
    system("cls");
             }while(choix2>3 || choix2<1);

             switch(choix2){
             case 1:
                 panier(liste_voyages);
                 break ;

             case 2:
                 supprimer(liste_voyages);
                 break;
             case 3:
                 modif(liste_voyages);
                 break;}
    break;

    case 3:
        do{decorate_message("Bienvenu dans notre agence de voyage TUNISAIR_ENSI ");
    printf("\n\n\n                                    ******************************************************\n");
    printf("\n\t                               SAISIR(1) : pour chercher un voyage entre deux dates. \n");
    printf("\t                               SAISIR(2) : pour chercher un voyage selon une date precise. \n\n");
    printf("                                    ******************************************************\n\t                               TA REPONSE : ");
    scanf("%d",&choix3);
            system("cls"); }while(choix3>2 || choix3<1);
             switch(choix3){
        case 1:
            rechercher("basededonnee");
            break;
        case 2:
            rechercher1("basededonnee");
            break;}

             }do{
             printf("\t\n\  ---------------------------------------\n");
             printf("\t\n\tPRESS (0) TO EXIT.  ");
   printf("\n\tPRESS (1) TO BACK.  \n");
   printf("\n\  ---------------------------------------\n");
   scanf("%d",&truee);
   system("cls") ;}while((truee!=1)&&(truee!=0));}
break ;

                 // pour l admin

                 case 2:
                  while (truee==1) {
    do{decorate_message("Bienvenu dans notre agence de voyage TUNISAIR_ENSI ");
    printf("\n\n\n                                    ******************************************************\n");
    printf("\n\t                               SAISIR(1) : pour saisir un voyage. \n");
    printf("\t                               SAISIR(2) : pour afficher toutes les voyages disponibles. \n\n");
    printf("                                    ******************************************************\n\t                               TA REPONSE : ");
    scanf("%d",&choix4);
            system("cls"); }while(choix4>2 || choix4<1);


            switch(choix4){
            case 1:
                  printf("Donner le nombre de voyages a saisir : \n");
                  printf("---------------------------------------\n");
                  scanf("%d",&nbvoy);
                  for (i=0;i<nbvoy;i++){
                      printf("voyage [%d] : \n",i+1);
                      saisir("basededonnee");}
                  system("cls");
                  break ;

            case 2:
               afficher("basededonnee");
               break ;
}
            do{
   printf("\n\n\n\n  ---------------------------------------\n");
   printf("\n\tPRESS (0) TO EXIT.  ");
   printf("\n\tPRESS (1) TO BACK.  \n");
   printf("\n\  ---------------------------------------\n");
   scanf("%d",&truee);
   system("cls") ;}while((truee!=1)&&(truee!=0));}
}
break ;
 }while(truee!=0);
    printf("\n\n ---------------------------------------\n");
   printf("    Merci pour votre confience, a bientot..");
 printf("\n\  ---------------------------------------\n");
   return 0;
}
