#include <stdio.h>

int main() {
 
    int index;
        
        char * nomesAlunos [3][3] = {
            {"aluno 0", "Por: 30", "Mat: 90"},
            {"aluno 1", "Por: 60", "Mat: 60"},
            {"aluno 2", "Por: 90", "Mat: 30"},
        };

        printf("Digite o nome do aluno que quer ver as notas....\n");
        printf("aluno 0, digite 0\n");
        printf("aluno 1, digite 1\n");
        printf("aluno 2, digite 2\n");


        scanf("%d", &index);
        printf("As notas do %s sao:\n  %s e  %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);


        return 0;
}