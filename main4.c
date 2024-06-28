#include <stdio.h>

int main (int argc, char *argv[]) {

     char productos[10][3][40];

    FILE *f = fopen("C:/Users/laboratorio/Documents/Archivo2.txt","a+");

    if (f==NULL){
        printf("No existe el archivo");
    }

    int i=0;
    while (!feof(f)){
        fscanf(f,"%s %s %s",productos[i][0],productos[i][1],productos[i][2]);
        i++;
    }

    for (int j = 0; j < 10; j++)
    {
        printf("%s %s\n",productos[j][0],productos[j][2]);
    }
    fclose(f);
    return 0;
}