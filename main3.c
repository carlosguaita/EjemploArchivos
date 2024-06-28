#include <stdio.h>

int main (int argc, char *argv[]) {
    
    char texto[50];
    FILE *f = fopen("C:/Users/laboratorio/Documents/Archivo2.txt","a+");

    if (f==NULL){
        printf("No existe el archivo");
    }

 
    while (!feof(f)){
        fgets(texto,50,f);
        printf("%s",texto);
    }

    fclose(f);
    return 0;
}