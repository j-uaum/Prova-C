// Exercicio 1
/*Um vendedor de uma loja de sapatos recebe como pagamento 20% de comissão sobre o valor das
vendas do mês e R$ 5,00 por cada par de sapatos vendido. Escreva um algoritmo que, dado o valor das
vendas do mês e o número de sapatos vendidos, mostre qual será o salário do vendedor naquele mês.*/

#include <stdio.h>
int main() {
 float vendas_mes, comissao_vendas, comissao_sapatos, salario;
 int numero_sapatos;
 
 printf("Informe o valor das vendas: ");
 scanf("%f", &vendas_mes);
 
 printf("Informe número sapatos vendidos: ");
 scanf("%d", &numero_sapatos);
 
 comissao_vendas = vendas_mes * 0.2;
 comissao_sapatos = numero_sapatos * 5;
 
 salario = comissao_vendas + comissao_sapatos;
 
 printf("O salário do mês é: %.2f", salario);
 return 0;
}


// Exercicio 2
/* Em uma certa papelaria, até 100 folhas, a cópia do xerox custa R$ 0,25 e, acima de 100 folhas, cada
cópia adicional do xerox custa R$ 0,20. Escreva um algoritmo que dado o número total de cópias,
informe o valor a ser pago.*/

#include <stdio.h>
int main(){
 
 int num_copias;
 float valor_total;
 
 printf("Informe o número de cópias: ");
 scanf("%d", &num_copias);
 
 if(num_copias <= 100){
 valor_total = num_copias * 0.25;
 }
 else{
 valor_total = (num_copias - 100) * 0.20 + 25;
 }
 
 printf("Valor total: %.2f", valor_total);
 
 return 0;
}

// Exercicio 3
/*Escreva um algoritmo que mostre o resultado da soma dos primeiros 20 termos da série: 1/1 + 3/2 +
5/4 + 7/8 + ... Resultado: 6.0.*/

#include <stdio.h>
 
int main() {
  int i;
  float  i2,soma;
  i=1;
  i2=1;
  soma=0;
  do{
     printf("%d / %.0f\n", i, i2);
     soma = soma + (i/i2);
     i+=2;
     i2+=i2;
  }while(i<=20);
  printf("%.2f", soma);
  return 0;
}

// Exercicio 4
/*Escreva um algoritmo que leia 5 valores e conte quantos valores estão no intervalo [10, 20] e quantos
valores estão fora deste intervalo. Em seguida, mostre o resultado das duas contagens.*/

#include <stdio.h>
int main() {
 
 int i, numero, dentro_intervalo, fora_intervalo;
 
 dentro_intervalo = 0;
 fora_intervalo = 0;
 
 for(i = 1; i <= 5; i++){
 printf("Informe número: ");
 scanf("%d", &numero);
 
 if(numero >=10 && numero <= 20){
 dentro_intervalo = dentro_intervalo + 1;
 }
 else{
 fora_intervalo = fora_intervalo + 1;
 }
 }
 
 printf("\nDentro do intervalo: %d", dentro_intervalo);
 printf("\nFora do intervalo: %d", fora_intervalo);
 
 return 0;
}