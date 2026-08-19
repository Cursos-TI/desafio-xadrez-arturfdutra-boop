#include <stdio.h>

// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
  // declarando a torre
  // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
void movertorre(int torre) { 
if (torre <= 0) {
return;
}
printf (" movimento da torre -> direita\n");
movertorre (torre - 1);
}


// declarando a rainha 
void moverrainha(int rainha) {
if (rainha <= 0) {
  return;
}
printf ("movimento da rainha -> esquerda\n");
moverrainha (rainha - 1);
}

// declarando o bispo 
void moverbispo (int bispo) {
  if (bispo <= 0){
    return;
  }
  printf("movimento do bispo -> direita\n");
  printf ("movimento do bispo -> cima\n");
  moverbispo ( bispo - 1);
}
// declarando o cavalo
void movercavalo (int cavalo) {
if (cavalo == 0){
 printf ("movimento do cavalo -> direita\n");
  return;
}
 printf ("movimento do cavalo -> cima\n");

movercavalo (cavalo - 1);
}

int main () {

int 
totalcasas = 5;
  movertorre(totalcasas);
  totalcasas = 8;
moverrainha(totalcasas);
totalcasas = 5;
moverbispo(totalcasas);
totalcasas = 2;
movercavalo(totalcasas);
return 0;
}


    
   

