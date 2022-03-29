//
// Created by picha on 24/03/2022.
//
#include <stdio.h>
void convierteHexadecimal(int decimal, int hexadecimalNum[10], char hexadecimalChar[6]);
int main(){
int decimal;
int hexadecimalNum[10]={0,1,2,3,4,5,6,7,8,9};
char hexadecimalChar[6]="ABCDEF" ;
    printf("Numero decimal:");
    scanf("%i", &decimal);
    printf("Numero a Hexadecimal:");
    //Funcion rescursiva
    convierteHexadecimal(decimal,hexadecimalNum,hexadecimalChar);


}
void convierteHexadecimal(int decimal, int hexadecimalNum[10], char hexadecimalChar[6]) {
    if(decimal%16!=decimal){
        convierteHexadecimal(decimal/16, hexadecimalNum, hexadecimalChar);
    }

    if(decimal%16!=decimal){
        if (decimal % 16 < 10) {
            printf("%d", hexadecimalNum[decimal % 16]);
        }
        if (decimal % 16 >= 10) {
            printf("%c", hexadecimalChar[(decimal % 16) - 10]);
        }
    }
    if(decimal%16==decimal) {
        if (decimal % 16 < 10) {
            printf("%d", hexadecimalNum[decimal % 16]);
        }
        if (decimal % 16 >= 10) {
            printf("%c", hexadecimalChar[(decimal % 16) - 10]);
        }
    }
    }