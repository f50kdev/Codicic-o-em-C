#include <stdio.h>
#include<stdlib.h>

/* 2023 uploading */

int main(){

         char nome[50]; 
         int nota1 , nota2,  media;

         printf("Insira o seu nome\n\n");
         scanf("%s" , &nome);

         printf("Insira a sua primeira nota\n\n");
         scanf("%d" , &nota1);

         printf("Insira a sua segunda nota\n\n");
         scanf("%d" , &nota2);

         media = ( nota1 + nota2)/2;

         if ( media >= 7 && media < 9){
            printf("O senhor Vai ao Exame \n\n");

       
         

         }         
         
    return 0;
}
