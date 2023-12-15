#include <stdio.h>
#include <stdlib.h>
#include "file.c"

int main(){
    int X;
    File F6; //declaration d'une file appelee F6
    F6 = init_F(F6);//initialisation de la file 
    defiler(F6, &X);
    
    return 0;
}