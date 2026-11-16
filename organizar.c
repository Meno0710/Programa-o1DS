#include <stdio.h>
int main() {
    int V[10];
    V[0]=15;
    V[1]=26;
    V[2]=6731;
    V[3]=232;
    V[4]=111;
    V[5]=10;
    V[6]=21;
    V[7]=84;
    V[8]=43;
    V[9]=25;
    printf("voce tem uma variavel de tamanho 10\n");
        printf("cada posição da variavel tem um valor\neu irei ordenalos por ordem ascendente");
    int i=0;//contador
 
    int aux,aux2; //auxiliar
    while(i!=10){
        aux=V[i];
        aux2=V[i+1];
        if (V[i]>V[i+1]){
            V[i]=aux2;
            V[i+1]=aux;
            aux2=V[i+1];
            aux=V[i];
        
          
            }

   i++;     
    }
       while(i!=10){
       printf("%d",V[i]\n);
           i++;
       }

}
