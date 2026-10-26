#include <stdio.h>
int main(){
    int i , t ; //i = contador //t = turma
    printf("qual é o numero de alunos na turma?:");
    scanf("%d",&t);
    int var[t];
    i=0;
    while(i!=t){
      var[i]=i+1;
        printf("var[%d",i);
        printf("]=%d\n",var[i]);
        i++;
    }
    
}
