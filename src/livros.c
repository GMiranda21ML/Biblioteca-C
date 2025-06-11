#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livros.h"

void cadastrarLivro(Livro **head, char titulo[100], char autor[100], int quantidade) {
    Livro *novoLivro = (Livro *)malloc(sizeof(Livro));
    strcpy(novoLivro->titulo, titulo);
    strcpy(novoLivro->autor, autor);
    novoLivro->quantidade = quantidade;
    novoLivro->next = NULL;
    
    if (*head == NULL) {
        novoLivro->id = 0;
        novoLivro->next = *head;
        *head = novoLivro;
    } else {
        Livro *temp = *head;
        int id = 1;
        while (temp->next != NULL) {
            id++;
            temp = temp->next;
        }

        novoLivro->id = id;
        novoLivro->next = temp->next;
        temp->next = novoLivro;
    }

    printf("\nLivro (%s) cadastrado com sucesso!\n", novoLivro->titulo);
}

void listarLivros(Livro **head) {
    if (*head == NULL) {
        printf("\nLista Vazia\n");
    } else {
        Livro *temp = *head;
        while (temp != NULL) {
            printf("ID: %d\nTitulo: %s\nAutor: %s\nQuantidade: %d\n", temp->id, temp->titulo, temp->autor, temp->quantidade);
            temp = temp->next;
        }
    }
}