#include <stdio.h>
#include "file.h"


File init_F(File F1){
    F1.debut = 0;
    F1.fin = -1;
    return F1;

}
int estVideFile(File F2){
    if(F2.debut > F2.fin){
        return 1;
    }
    else{
        return 0;
    }

}
int estPleineFile(File F3){
    if ((F3.debut < F3.fin) && (F3.fin = dmax - 1)){
        return 1;
    }
    else{
        return 0;
    }
}
File enfiler(File F4, int E){
    if (estPleineFile(F4) == 1){
        printf("File pleine. Impossible d'enfiler !");
    }
    else{
        F4.fin++;
        F4.tab[F4.fin] = E;
    }
    return F4;
}
void defiler(File F5, int *X){
    if (estVideFile(F5) == 1){
        printf("File vide Impossible de defiler !");
    }
    else{
        *X = F5.tab[F5.debut];
        F5.debut++;
    }
}