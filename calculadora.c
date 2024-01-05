#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
           
           int op;
           float num1, num2, res;
           
           printf("Digite 1 para somar;\n");
           printf("Digite 2 para subitrair;\n");
           printf("Digite 3 para multiplicar;\n");
           printf("Digite 4 para dividir;\n");
           scanf("%d", &op);
           
           printf("Digite o primeiro numero: \n");
           scanf("%f", &num1);
           
           printf("Digite o segundo numero: \n");
           scanf("%f", &num2);
           
           if (op == 1){
                  
                  res = num1 + num2;
                  
                  printf("O resultado da soma e: %f\n", res); 
                  
           }
           
           if (op == 2){
                  
                  res = num1 - num2;
                  
                  printf("O resultado da subtracao e: %f\n", res); 
                  
           }
           
           if (op == 3){
                  
                  res = num1 * num2;
                  
                  printf("O resultado da multiplicacao e: %f\n", res); 
                  
           }
           
           if (op == 4){
                  
                  res = num1 / num2;
                  
                  printf("O resultado da divisao e: %f\n", res); 
                  
           }
           
           system("pause");
           
           return 0;
}
