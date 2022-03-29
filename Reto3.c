//
// Created by picha on 22/03/2022.
//
#include <stdio.h>
int capturaletras(char letras[3]);
int imprimeletras(char letras[3]);
void burbuja( char arreglo[10], int MAX);
int buscaMayor(char letras[3], char objetivo, char arreglo2[3]);
char buscaMenor(char arreglo2[3]);

int main(){
    char arreglo[3];
    char objetivo;
    char arreglo2[3]="zzz";
    char salida;
    printf("Objetivo:");
    scanf("%c", &objetivo);
    printf("\n");
    capturaletras(arreglo);
    burbuja(arreglo, 3);
    printf("Arreglo ordenado: ");
    imprimeletras(arreglo);

    printf("\n");
    buscaMayor(arreglo, objetivo, arreglo2);
    salida=buscaMenor(arreglo2);
    printf("Salida: %c", salida);
}
int capturaletras(char letras[3]){

    for(int i=0; i<3; i++){
        printf("Letra[%d]:", i);
        scanf("%s", &letras[i]);
    }
}
int imprimeletras(char letras[3]){
    for(int i=0; i<3; i++){
        printf("%c ", letras[i]);
    }
}
void burbuja(char arreglo[10], int MAX) {
    char aux;
    for(int i=0; i<MAX; i++){
        for(int actual=0;actual<MAX-1;actual++){
            if(arreglo[actual]>arreglo[actual+1]){
                aux=arreglo[actual];
                arreglo[actual]=arreglo[actual+1];
                arreglo[actual+1]=aux;
            }
        }
    }
}
int buscaMayor(char letras[3], char objetivo, char arreglo2[3]){

    for(int i=0; i<3; i++){
        if(letras[i]>objetivo){
            arreglo2[i]=letras[i];
        }
    }

}
char buscaMenor(char arreglo2[3]){
    char menor=arreglo2[0];
    for(int i=0; i<3; i++){
        if(arreglo2[i]<menor){
            menor=arreglo2[i];
        }
    }
    return menor;
}

