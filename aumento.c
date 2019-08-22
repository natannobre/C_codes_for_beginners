#include <stdio.h>
 
int main() {
 
   float salario, ajuste;
   
   scanf("%f", &salario);
   
   if(salario >= 0 && salario <= 400){
        ajuste= salario*0.15;
        salario+= ajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", ajuste);
        printf("Em percentual: 15 %%\n");
   }else if(salario > 400 && salario <= 800){
        ajuste= salario*0.12;
        salario+= ajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", ajuste);
        printf("Em percentual: 12 %%\n");
   }else if(salario > 800 && salario <= 1200){
        ajuste= salario*0.10;
        salario+= ajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", ajuste);
        printf("Em percentual: 10 %%\n");
   }else if(salario > 1200 && salario <= 2000){
        ajuste= salario*0.07;
        salario+= ajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", ajuste);
        printf("Em percentual: 7 %%\n");
   }else if(salario > 2000){
        ajuste= salario*0.04;
        salario+= ajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", ajuste);
        printf("Em percentual: 4 %%\n");
   }
   
 
    return 0;
}
