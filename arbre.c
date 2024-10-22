#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "arbre.h"

/**
 * Créer une arbre vide
 * @return TArbre *a
 */
TArbre* arbreConsVide(){
    TArbre* empty;
    empty = (TArbre*) malloc(sizeof(TArbre));
    return empty;
}
/**
 * Verifier si l'arbre est vide
 * @param TArbre *a
 * @return int 
 */
int arbreEstVide(TArbre* a){
    if(a == arbreConsVide())
        return 1;
    return 0;
}
/**
 * Créer une arbre 
 * @param char c
 * @param int n
 * @param TArbre* fg
 * @param TArbre* fd
 * @return TArbre *a
 */ 
TArbre* arbreCons(char c, int n, TArbre* fg, TArbre* fd){
    TArbre* arbre;
    arbre = (TArbre*)malloc(sizeof(TArbre));
    arbre->data=c;
    arbre->nbOcc=n;
    arbre->droite=fd;
    arbre->gauche=fg;
    return arbre;
}

/**
 * Retourner la lettre stocker dans la racine 
 * @param TArbre* a
 * @return char 
 */ 
char arbreRacineLettre(TArbre* a){
    return a->data;
}

/**
 * Retourner le nbOcc de la racine 
 * @param TArbre* a
 * @return int
 */ 
int arbreRacineNbOcc(TArbre* a){
    return a->nbOcc;
}

/**
 * Retourner le fils gauche 
 * @param TArbre* a
 * @return c
 */ 
TArbre* arbreFilsGauche(TArbre* a){
    return a->gauche;
}

/**
 * Retourner le fils droit
 * @param TArbre* a
 * @return TArbre* 
 */ 
TArbre* arbreFilsDroit(TArbre* a){
    return a->droite;
}

/**
 *  Supprimer l'arbre
 * @param TArbre* a
 */ 
void arbreSuppr(TArbre** a){
    if((*a)->data != '\0'){

        if((*a)->gauche)
        arbreSuppr(&((*a)->gauche));

        if((*a)->droite)
        arbreSuppr(&((*a)->droite));
        
        free(*a);
    }
}
