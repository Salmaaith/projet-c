#pragma once
//#ifndef VOITURE_H
//#define VOITURE_H

 //structure
typedef struct {
 int ID ;
 char marque[30];
 int Model;
 int nbr_place;
 char transmission[30];
 char type_carburant[30];
 float prix;
 int disponible;
 }Voiture;




 //prototypes
 void ajoutervoiture( Voiture voitures[] , int nbr){}
 void recherchevoiture(Voiture voitures[], int nbr){}
 void affichervoitures(Voiture voitures[], int nbr){}
  void modifiervoiture(){



 //#endif // VOITURE_H
