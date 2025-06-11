#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "livros.h"

int main() {
    Livro *head = NULL;

    while (1) {
        system("clear");
        bemVindo();
        opcoesMenu();
        int op;
        scanf("%d", &op);

        switch (op)
        {
            case 0:
                printf("Saindo...");
                exit(1);
                break;

            case 1:
                char livro[100];
                char autor[100];
                int quantidade;
                printf("Digite o nome do livro: ");
                scanf(" %[^\n]", livro);
                printf("Digite o nome do autor: ");
                scanf(" %[^\n]", autor);
                printf("Digite a quantidade de livros: ");
                scanf("%d", &quantidade);

                cadastrarLivro(&head, livro, autor, quantidade);
                break;
            
            case 2:
                listarLivros(&head);
                break;

            default:
                printf("\nOpcao invalida! Por favor, digite novamente\n");
                break;
        }

        voltarAoMenu();
    }
    
    return 0;
}