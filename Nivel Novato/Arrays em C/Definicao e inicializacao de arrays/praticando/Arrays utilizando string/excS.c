#include <stdio.h>
 
int main() {
    char *nomes[] = {"Alice", "Bob", "Carol", "Dave"};  // Array de strings (array de ponteiros para char)
    int i;
    for(i = 0; i < 4; i++) {
        printf("%s\n", nomes[i]);
    }
    return 0;
}

//OBS: Não vi ainda ate o momento

//O loop for itera sobre cada elemento do array nomes e imprime cada nome usando %s no printf, que é o especificador de formato para strings em C. para poupar linhas de codigo. e não precisar printar cada nome individualmente.