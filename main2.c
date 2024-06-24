#include <stdio.h>

int main (int argc, char *argv[]) {

    char text[40];

    printf("Ingrese el texto a guardar: ");
    fgets(text,40,stdin);
    
    FILE *f = fopen("Archivo2.txt","w");

    if (f==NULL){
        printf("No existe el archivo");
    }

   fputs(text,f);

    fclose(f);
    return 0;
}