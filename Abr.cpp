#include<stdio>
#include <iostream>

class Arbre
{
  class Noeud
  {     
     // Constructor:
 Noeud(int dat, Noeud *gau=NULL, Noeud *dro=NULL) :
        donnee(dat), gauche(gau), droite(dro) {}
      // Membres:
  int    donnee;
  Noeud *gauche;
  Noeud *droite;
  }

   // Pointeurs de l'arbre racine et noeud actuel:
   Noeud *racine;
   Noeud *actuel;
   int compteur;
   int hauteur;
}

/* verification si arbre null
 if(arbre == NULL)
   {
      arbre = noeud;
      return;
   }
void Ajouter(int valeur)
{
   // Création de notre nouveau noeud en mémoire
   Noeud* nouveau = new Noeud;
   nouveau->valeur = valeur;
   nouveau->fils_droite = NULL;
   nouveau->fils_gauche = NULL;

   // Puis on laisse Placer() le mettre à la bonne place
   Placer(nouveau);
}

 */
