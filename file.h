#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED
#define dmax 5
typedef struct File File;

struct File
{
   int tab [dmax] ;
   int  debut;
   int fin;
};

File init_F(File F1);
int estVideFile(File F2);
int estPleineFile(File F3);
File enfiler(File F4, int E);
void defiler(File F5, int *X);


#endif //FILE_H_INCLUDED