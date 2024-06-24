#include <stdio.h>
#include "string.h"

int main (int argc, char *argv[]) {

     char productos[10][3][40]={{"Jordan","Zapatos","Nike"},
                               {"Classic","Camisas","Nike"},
                               {"Terrex","Zapatos","Adidas"},
                               {"Classic","Zapatos","Puma"},
                               {"Venture","Camisas","Nike"},
                               {"Superst","Zapatos","Adidas"},
                               {"Terrex","Chompas","Adidas"},
                               {"Classic","Chompas","Puma"},
                               {"Venture","Chompas","Adidas"},
                               {"Hoddie","Chompas","Puma"}};

    FILE *f = fopen("C:/Users/laboratorio/Documents/Archivo2.txt","w");

    if (f==NULL){
        printf("No existe el archivo");
    }

    //fputs(text,f);
    for (int i = 0; i < 10; i++)
    {
        fprintf(f,"Nombre: %s Categoria: %s  Marca: %s\n",productos[i][0],productos[i][1],productos[i][2]);
    }

    fclose(f);

    return 0;
}