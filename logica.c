#include   <stdio.h>
int main(){
int age;
int name;
printf("qual e o seu nome?:");
scanf("%s",name);
printf("qual e a sua idade?:");
scanf("%d",&age);
if(age>=18){
    printf("acesso liberado");
}
else{
    printf("acesso negado");
}
}