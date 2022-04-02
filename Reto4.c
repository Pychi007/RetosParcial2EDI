//
// Created by picha on 29/03/2022.
//

#include <stdio.h>
int capturadatos (int arreglo[10], int tam);
int imprimerarreglo(int arreglo[10], int tam);
void burbuja( int arreglo[10], int MAX);
void mezclaArreglos( int nums[10], int nums2[10], int tam, int tam2);
int main(){
    int n, m;
    int nums[10];
    int nums2[10];
    int salida[20];
    printf("Tamanio nums:");
    scanf("%i", &n);
    printf("Tamanio nums2:");
    scanf("%i", &m);
    printf("Arreglo nums:\n");
    capturadatos(nums, n);
    printf("Arreglo nums2:\n");
    capturadatos(nums2, m);
    burbuja( nums, n);
    burbuja( nums2, m);
    printf("*********Arreglos ordenados*********\n");
    printf("nums:  ");
    imprimerarreglo(nums,n);
    printf("\n");
    printf("nums2: ");
    imprimerarreglo(nums2, m);
    printf("\n");
    for(int i=0; i<n; i++){
        salida[i]=nums[i];
    }
    for(int i=n; i<n+m; i++){
        salida[i]=nums2[i-n];
    }
    printf("Salida: ");
    burbuja(salida,n+m);
    imprimerarreglo(salida, n+m);
}
int capturadatos (int arreglo[10], int tam){
    for(int i=0; i<tam; i++){
        printf("[%i]:", i);
        scanf("%i", &arreglo[i]);
    }
}
int imprimerarreglo(int arreglo[10], int tam){
    for(int i=0; i<tam; i++){
        printf("%i ", arreglo[i]);

    }
}
void burbuja(int arreglo[10], int MAX) {
    int aux;
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
