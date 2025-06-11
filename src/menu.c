#include <stdio.h>

void bemVindo() {
    printf(
        "██████╗░███████╗███╗░░░███╗  ██╗░░░██╗██╗███╗░░██╗██████╗░░█████╗░\n"
        "██╔══██╗██╔════╝████╗░████║  ██║░░░██║██║████╗░██║██╔══██╗██╔══██╗\n"
        "██████╦╝█████╗░░██╔████╔██║  ╚██╗░██╔╝██║██╔██╗██║██║░░██║██║░░██║\n"
        "██╔══██╗██╔══╝░░██║╚██╔╝██║  ░╚████╔╝░██║██║╚████║██║░░██║██║░░██║\n"
        "██████╦╝███████╗██║░╚═╝░██║  ░░╚██╔╝░░██║██║░╚███║██████╔╝╚█████╔╝\n"
        "╚═════╝░╚══════╝╚═╝░░░░░╚═╝  ░░░╚═╝░░░╚═╝╚═╝░░╚══╝╚═════╝░░╚════╝░\n\n"
    );
}

void opcoesMenu() {
    printf("Digite 1 para cadastrar um livro");
    printf("\nDigite 2 para listar todos os livros");
    printf("\nDigite 3 para buscar livro por titulo");
    printf("\nDigite 4 para atualizar dados de um livro");
    printf("\nDigite 5 remover livro");
    printf("\nDigite 0 para sair do programa");
    printf("\n\nDigite a sua opcao: ");
}

void voltarAoMenu() {
    char tecla;
    printf("\nDigite qualquer tecla para voltar ao menu: ");
    scanf(" %c", &tecla);
}