//Cada elemento de um array pode ser acessado diretamente pelo seu índice. Os índices dos arrays começam em 0. Vamos ver como acessar e imprimir elementos específicos de um array. Observe!

#include <stdio.h>
 
int main() {
    int numeros[5] = {10, 20, 30, 40, 50};  // Inicialização do array com valores
 
    // Acessando e imprimindo elementos específicos do array
    printf("O primeiro elemento é %d\n", numeros[0]);
    printf("O terceiro elemento é %d\n", numeros[2]);
    printf("O quinto elemento é %d\n", numeros[4]);
 
    return 0;
}