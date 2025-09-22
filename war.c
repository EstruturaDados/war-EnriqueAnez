// --- Bibliotecas necessárias ---
#include <stdio.h>
#include <string.h>

// --- Definição da struct ---
struct Territorio {
    char nome[30];  
    char cor[10];  
    int tropas; 
};
// --- Declaração de vetor de structs ---
int main() {
    struct Territorio territorios[5];
    int tropas; 

// --- Entrada dos dados ---
    printf("--- Cadastro de Território ---\n");
    printf("Por favor, insira as informacoes para 5 territorios.\n\n");

    // --- Exibição ---
    for (tropas = 0; tropas < 5; tropas++) {
        printf("Territorio %d:\n", tropas + 1);

        printf("  Nome do territorio: ");
        fgets(territorios[tropas].nome, sizeof(territorios[tropas].nome), stdin);
        territorios[tropas].nome[strcspn(territorios[tropas].nome, "\n")] = 0;

        printf("  Cor do exercito: ");
        scanf("%s", territorios[tropas].cor);

        printf("  Numero de tropas: ");
        scanf("%d", &territorios[tropas].tropas);

        while (getchar() != '\n');
        printf("\n");
    }

    printf("--- Territorios Cadastrados ---\n");

    for (tropas = 0; tropas < 5; tropas++) {
        printf("Territorio %d:\n", tropas + 1);
        printf("  Nome: %s\n", territorios[tropas].nome);
        printf("  Cor: %s\n", territorios[tropas].cor);
        printf("  Tropas: %d\n", territorios[tropas].tropas);
        printf("\n");
    }

    return 0;
}