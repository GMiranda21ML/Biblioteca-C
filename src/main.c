#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "livros.h"

#ifdef _WIN32
    #define LIMPAR_TELA "cls"
#else
    #define LIMPAR_TELA "clear"
#endif

int main() {
    Livro *head = NULL;

    while (1) {
        system(LIMPAR_TELA);
        bemVindo();
        opcoesMenu();
        int op;
        scanf("%d", &op);

        system(LIMPAR_TELA);
        switch (op)
        {
            case 0:
                printf("Saindo...");
                exit(1);
                break;

            case 1:
                cadastroDeLivro();
                char titulo[100];
                char autor[100];
                int quantidade;
                printf("Digite o nome do livro: ");
                scanf(" %[^\n]", titulo);
                printf("Digite o nome do autor: ");
                scanf(" %[^\n]", autor);
                printf("Digite a quantidade de livros: ");
                scanf("%d", &quantidade);

                cadastrarLivro(&head, titulo, autor, quantidade);
                break;
            
            case 2:
                listar();
                listarLivros(&head);
                break;
            
            case 3:
                buscar();
                exibirLivroPorNome(&head);
                break;
            
            case 4: 
                atualizar();
                atualizarLivroPorId(&head);
                break;
            
            case 5:
                remover();
                removerLivroPorId(&head);
                break;

            case 6:
                emprestimo();
                emprestarLivroPorId(&head);
                break;
            
            case 7:
                devolucao();
                devolverLivroPorId(&head);
                break;

            default:
                printf("\nOpcao invalida! Por favor, digite novamente\n");
                break;
        }

        voltarAoMenu();
    }
    
    return 0;
}