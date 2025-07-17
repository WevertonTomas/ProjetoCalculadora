#include <stdio.h>

int main() {

int n1,n2,operacao;

printf("Digite o primeiro número: ");
scanf("%d", &n1);
printf("Agora, Digite o segundo número: ");
scanf("%d", &n2);

printf("\nOs números escolhidos foram, %d e %d.", n1,n2);
printf("\nAgora, me diga qual operação deseja realizar.\n\n1. Soma.\n2. Subtração. \n3. Multiplicação. \n4. Divisão.\n\n");
scanf("%d", &operacao);

if (operacao == 1){
printf("\nA soma dos números digitados é: %d", n1 + n2);
}else if (operacao == 2){
printf("\nA subtração dos números digitados é: %d", n1 - n2);
}else if(operacao == 3){
printf("\nA multiplicação dos números digitados é: %d", n1 * n2);
}else if(operacao == 4){
if (n2 == 0){
printf("Erro: Divisão por 0 não é permitida.");
}else{
printf("\nA divisão dos números digitados é: %.2f", (float) n1 / n2);}
}else{
printf("\nEsse não é um operador válido.");
}
return 0;
}