//A busca condicional é essencial para localizar elementos específicos em uma matriz; no quinto exemplo, procuramos um valor específico e imprimimos sua posição, se encontrado. Confira!

#include <stdio.h>
 
int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 5;
    int found = 0;
 
    // Busca condicional do elemento alvo
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
 
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}

//Nesse exemplo, buscamos um valor específico em uma matriz e imprimir sua posição, se encontrado. Confira!

//======== EXPLICAÇÃO DO CÓDIGO ========


//======= 1) DECLARAÇÃO E INICIALIZAÇÃO DA MATRIZ =======

// 1) A matriz matriz é declarada e inicializada com valores predefinidos: {{1,2,3},{4,5,6},{7,8,9}}.


///======= 2) DECLARAÇÃO DO VALOR ALVO =======

// 2) Declaramos um valor alvo (target) para procurar na matriz: int target = 5;
//Declaramos uma variável de controle (found) para indicar se o valor foi encontrado: int found = 0;



//======= 3) BUSCA CONDICIONAL DO ELEMENTO ALVO =======

// 3) Utilizamos dois loops for aninhados para percorrer todas as posições da matriz. O loop externo (for (int i=0;i<3; i++ ) ) itera sobre as linhas da matriz, enquanto o loop interno (for (int j=0;j<3; j++ ) itera sobre as colunas.
//Dentro do loop interno, usamos uma condicional if (matriz[][]] == target) para verificar se o valor do elemento atual é igual ao valor alvo. Se a condição for verdadeira, imprimimos a posição do elemento na matriz printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);), definimos a variável found como 1 para indicar que o valor foi encontrado e utilizamos break para sair do loop interno.
//Após o break do loop interno, utilizamos outro if (found) para sair do loop externo, interrompendo a busca assim que o valor é encontrado.

//======= 4) VERIFICAÇÃO E IMPRESSÃO DO RESULTADO =======

// 4) Após percorrer a matriz, verificamos se o valor alvo foi encontrado. Se found ainda for 0 , significa que o valor não foi encontrado na matriz. Utilizamos printf("Elemento %d não encontrado na matriz\n", target); para imprimir uma mensagem indicando que o valor alvo não foi encontrado.
