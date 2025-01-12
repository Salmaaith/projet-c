#include "voiture.h"
#include <stdio.h>
#include <stdlib.h>
#include "Voiture.h"

  //void ajoutervoiture(){
       FILE *fichier = fopen("voitures.txt", "a");
 Voiture V;
 printf("l'ID");
 scanf("%d",&V.ID);
 printf("la marque");
 scanf("%s",V.marque);
 printf("le model");
 scanf("%d",&V.Model);
 printf("le nombre de place");
 scanf("%d",&V.nbr_place);
 printf("la transmission est");
 scanf("%s",V.transmission);
 printf("le type de carburant ");
 scanf("%s",V.type_carburant);
 printf("le prix est");
 scanf("%f",&V.prix);
 printf("disponibilite (1=oui 0=non)");
 scanf("%d",&V.disponible);
   fprintf(fichier,"%d_%s_%d_%d_%s_%s_%.2f_%d\n",V.ID,V.marque,V.Model,V.nbr_place,V.transmission,V.type_carburant,V.prix,V.disponible);
   fclose(fichier);
  }

    // void affichervoitures(){
    FILE *fichier = fopen("voitures.txt", "r");
    if (fichier == NULL) {
        printf("Erreur d'ouverture du fichier ou aucun fichier trouvé \n");
        return;
    }

    Voiture V;
    printf("La liste des voitures: \n");
    printf("ID * Marque * Modèle * Carburant * Places * Transmission * Prix * Disponibilité\n");
    while (fscanf(fichier, "%d ,%s[^/], %s[^/], %s[^/], %d ,%s[^/], %f ,%d\n",&V.ID, V.marque, V.Model, V.type_carburant, &V.nbr_place, V.transmission,
                   &V.prix, &V.disponible) != EOF) {
        printf("ID:%d \n Marque:%s \n Modele:%s \n Carburant:%s \n Place:%d \n Transmission:%s\n Prix:%.2f\n Disponibilité:%s\n",
               V.ID, V.marque, V.Model , V.type_carburant, V.nbr_place, V.transmission, V.prix, V.disponible ? "Disponible" : "Non disponible");
    }
    fclose(fichier);
  }

   //void recherchevoiture(){
    FILE *fichier = fopen("voitures.txt" , "r");
    if (fichier == NULL) {
        printf("Erreur d'ouverture du fichier ou aucun fichier trouvé \n");
        return;
    }

    char marqueRecherche[20];

    printf("Entrez la marque à rechercher: \n  ");
    scanf("%s", marqueRecherche);

    Voiture V;
    printf(" Résultats de recherche pour la marque %s \n", marqueRecherche);
    while (fscanf(fichier, "%d,%s[^/],%s[^/],%s[^/],%d,%s[^/],%f,%d\n",
            &V.ID, V.marque, V.Model, V.type_carburant, &V.nbr_place, V.transmission, &V.prix, &V.disponible) != EOF) {
        if (strcmp(V.marque, marqueRecherche) == 0) {
            printf("%d * %s * %s * %s * %d * %s * %.2f * %s\n",V.ID, V.marque, V.Model, V.type_carburant, V.nbr_place, V.transmission, V.prix,
                 V.disponible ? "Disponible" : "Non disponible"); }

 }
fclose(fichier);
}


   //void modifiervoiture(){
       FILE *fichier1 = fopen("voitures.txt", "w");
       Voiture *car1;
       Voiture *ptrcar=&car1;
   printf("saisir l'ID du voiture 1");
   scanf("%d",&ptrcar->ID);
   printf("saisir la marque du voiture 1");
   scanf("%s",ptrcar->marque);
   printf("saisir le model du voiture 1");
   scanf("%d",&ptrcar->Model);
   printf("saisir le nombre de place de voiture 1");
   scanf("%d",&ptrcar->nbr_place);
   printf("saisir la transmission de voiture 1");
   scanf("%s",ptrcar->transmission);
   printf("saisir le type de carburant de voiture 1");
   scanf("%s",ptrcar->type_carburant);
   printf("saisir le prix  de voiture 1");
   scanf("%f",&ptrcar->prix);
   printf("saisir la disponibilité de voiture 1 (1=oui 0=non)");
   scanf("%d",&ptrcar->disponible);
   fclose(fichier1);
   }
