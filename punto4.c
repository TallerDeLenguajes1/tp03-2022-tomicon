#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char **V;
    int n;
    printf("Ingrese la cantidad de nombres que ingresara:");
    scanf("%d", &n);
    fflush(stdin);
    V = (char **) malloc(n);
    for (int i = 0; i < n; i++)
    {
        V[i]= (char*) malloc(100);
        printf("ingrese un nombre: ");
        gets(V[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("se ha ingresado el nombre: ");
        puts(V[i]);
        free(V[i]);
    }
    free(V);
    return 0;
}