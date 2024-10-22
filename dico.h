#ifndef DEF_DICO
#define DEF_DICO
#include "arbre.h"

int piocherMot(char *motPioche);
int nombreAleatoire(int nombreMax);
void dicoAfficher(TArbre* a,char buffer[], int *cur);
void dicoAfficher(TArbre* a,char buffer[], int *cur);
int dicoNbMotsDifferents(TArbre* a);
int dicoNbMotsTotal(TArbre* a);
void dicoInsererMot(char mot[], TArbre** a);
int dicoNbOcc(char mot[], TArbre* a); 
TArbre* dicoInsererNouvMot(char mot[], TArbre* a);
TArbre* dicoBranche(char *mot);
void dicoNbOccAdd(char *mot, TArbre** a);
void print_ascii_tree(TArbre*);
void print_ascii_treeInsert(TArbre*,char *);
void dicoNbOccSim(char *mot, TArbre** a);
void dicoNbOccSimInit(char *mot, TArbre** a);
#endif