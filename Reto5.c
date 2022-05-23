//
// Created by picha on 22/05/2022.
//
#include <stdio.h>
#define MAX 4
typedef struct{
    char cadenaS[MAX];
    int top;
}CadenaS;
typedef struct{
    char cadenaT[MAX];
    int top;
}CadenaT;
//Cadena S
void setup(CadenaS *s);         //Iniciar la pila
int isEmpty(CadenaS stack);     //Esta vacia
int isFull(CadenaS stack);      //Esta llena
int push(CadenaS *s, char value);//Insertar
int pop(CadenaS *s, char *v);    //Eliminar
//Cadena T
void setupT(CadenaT *s);         //Iniciar la pila
int isEmptyT(CadenaT stack);     //Esta vacia
int isFullT(CadenaT stack);      //Esta llena
int pushT(CadenaT *s, char value);//Insertar
int popT(CadenaT *s, char *v);    //Eliminar
int main(){
    CadenaS s;
    CadenaT t;

    setup(&s);
    setupT(&t);
    int x;
    int y=2;
    char value;
    int r;
    r= push(&s, 'a');
    r= push(&s, 'b');
    r= push(&s, '#');
    r= push(&s, 'c');
    printf("s: ");
    for(int i=0; i<s.top+1; i++){
        printf("%c ", s.cadenaS[i]);
    }
    printf("\n");
    r= pushT(&t, 'a');
    r= pushT(&t, 'd');
    r= pushT(&t, '#');
    r= pushT(&t, 'c');

    printf("t: ");
    for(int i=0; i<t.top+1; i++){
        printf("%c ", t.cadenaT[i]);
    }
    //Cadena s
    for (int i=0; i<s.top+1; i++){
        if(s.cadenaS[i]=='#'){
            pop(&s, &s.cadenaS[i]);
            pop(&s, &s.cadenaS[i-1]);
            x=0;
        }
    }
    for (int i=0; i<s.top+1; i++){
        if(s.cadenaS[i]=='#'){
            pop(&s, &s.cadenaS[i]);
            pop(&s, &s.cadenaS[i-1]);
            x=0;
        }
    }
    printf("\n");
    printf("La cadena s queda como: ");
    for(int i=0; i<s.top+1; i++){
        printf("%c ", s.cadenaS[i]);
    }

    //Cadena T
    for (int i=0; i<t.top+1; i++){
        if(t.cadenaT[i]=='#'){
            popT(&t, &t.cadenaT[i]);
            popT(&t, &t.cadenaT[i-1]);
            y=0;
        }
    }
    for (int i=0; i<t.top+1; i++){
        if(t.cadenaT[i]=='#'){
            popT(&t, &t.cadenaT[i]);
            popT(&t, &t.cadenaT[i-1]);
            y=0;
        }
    }
    printf("\n");
    printf("La cadena t queda como: ");
    for(int i=0; i<t.top+1; i++){
        printf("%c ", t.cadenaT[i]);
    }
    printf("\n");
    printf("Salida: ");
    if(x==y){
        printf("1");
    }else{
        printf("0");
    }
}
void setup(CadenaS *s){
    s->top = -1;
}

int isEmpty(CadenaS stack){
    if(stack.top ==-1){
        return 1;
    }
    return 0;
}
int isFull(CadenaS stack){
    return (stack.top == MAX-1) ? 1: 0;
}
int push(CadenaS *s, char value){
    int r=0;
    if(isFull(*s)==0){
        s->top++;
        s->cadenaS[s->top]= value;
        r = 1;
    }
    return r;
}
int pop(CadenaS *s, char *v){

    if(!isEmpty(*s)){
        *v = s->cadenaS[s->top];
        s->top--;
        return 1;
    }
    return 0;
}
//Cadena T////////////////////////////////////////////////////////////
void setupT(CadenaT *s){
    s->top = -1;
}

int isEmptyT(CadenaT stack){
    if(stack.top ==-1){
        return 1;
    }
    return 0;
}
int isFullT(CadenaT stack){
    return (stack.top == MAX-1) ? 1: 0;
}
int pushT(CadenaT *s, char value){
    int r=0;
    if(isFullT(*s)==0){
        s->top++;
        s->cadenaT[s->top]= value;
        r = 1;
    }
    return r;
}
int popT(CadenaT *s, char *v){

    if(!isEmptyT(*s)){
        *v = s->cadenaT[s->top];
        s->top--;
        return 1;
    }
    return 0;
}