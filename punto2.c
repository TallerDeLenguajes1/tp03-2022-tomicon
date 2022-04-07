#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *V[5];
    for (int i = 0; i < 5; i++)
    {
        V[i]= (char*) malloc(100);
        printf("ingrese un nombre: ");
        gets(V[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("se ha ingresado el nombre: ");
        puts(V[i]);
    }
    
    

    return 0;
}