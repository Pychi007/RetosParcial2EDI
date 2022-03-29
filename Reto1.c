//
// Created by picha on 24/03/2022.
//
#include <stdio.h>
int multiplica(int nums[5], int respuesta[5],int tam);
int main(){
    int nums[5];
    int respuesta[5];
    int tam;
    printf("Dame el tamanio del arreglo maximo 5:\n");
    scanf("%i", &tam);

    //Leer nums
    for(int i=0; i<tam;i++){
        printf("nums[%i]:", i);
        scanf("%i",&nums[i]);
    }
    //imprimir nums
    printf("El arreglo nums es:\n");
    for(int i=0; i<tam;i++){
        printf("%i\n", nums[i]);
    }
    //imprimir respuesta
    multiplica(nums,respuesta,tam);
    printf("El arreglo respuesta es:\n");
    for(int i=0; i<tam;i++){
        printf("%i\n", respuesta[i]);
    }
}
int multiplica(int nums[5], int respuesta[5], int tam){
    int actual,aux, indice;

    for(indice=0;indice<tam;indice++) {
        aux=1;
        for (actual = 0; actual < tam; actual++) {
            aux = nums[actual] * aux;
            if(nums[indice]==0) {
                nums[indice]=1;
            }
            respuesta[indice] = aux / nums[indice];
        }
    }
}