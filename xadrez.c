#include <stdio.h>

// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
int main() {
    // Nível Novato - Movimentação das Peças
  // declarando a torre
  // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

int torre = 1;
while (torre <= 5)
{
printf ("direita\n");
torre++;
}

// declarando a rainha 
for (int rainha = 1; rainha <= 8; rainha++)
printf ("esquerda\n");

// declarando o bispo
int bispo = 1;
do {
printf ("cima,direita\n");
bispo++;    
} while (bispo <= 5);
    
// nivel aventureiro - movimentar o cavalo
// declarando o cavalo
for(int cavalo = 1; cavalo <= 1; cavalo++){
for(int cavalo = 1; cavalo <= 2; cavalo++){
printf ( " cima\n %c\t", cavalo * cavalo);
} 
printf ("direita\n");
}

 
return 0;

}
  

    
   

