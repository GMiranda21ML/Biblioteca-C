#ifndef LIVROS_H
#define LIVROS_H

typedef struct Livro {
    int id;
    char titulo[100];
    char autor[100];
    int quantidade;
    struct Livro *next;
} Livro;

void cadastrarLivro(Livro **head, char titulo[100], char autor[100], int quantidade);
void listarLivros(Livro **head);
void exibirLivroPorNome(Livro **head);
void atualizarLivroPorId(Livro **head);

#endif