#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "livros.h"

void cadastrarLivro(Livro **head, char titulo[100], char autor[100], int quantidade) {
    Livro *novoLivro = (Livro *)malloc(sizeof(Livro));
    strcpy(novoLivro->titulo, titulo);
    strcpy(novoLivro->autor, autor);
    novoLivro->quantidade = quantidade;
    novoLivro->next = NULL;
    
    if (*head == NULL) {
        novoLivro->id = 0;
        *head = novoLivro;

    } else {
        Livro *temp = *head;
        int maxId = -1;
        while (temp != NULL) {
            if (temp->id > maxId) {
                maxId = temp->id;
            }
            temp = temp->next;
        }
        novoLivro->id = maxId + 1;

        temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
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

void exibirLivroPorNome(Livro **head) {
    if (*head == NULL) {
        printf("\nLista Vazia\n");
    } else {
        char tituloBusca[100];
        printf("Digite o nome do livro: ");
        scanf(" %[^\n]", tituloBusca);
        Livro *temp = *head;
        while (temp != NULL) {
            if (strcmp(temp->titulo, tituloBusca) == 0) {
                printf("ID: %d\nTitulo: %s\nAutor: %s\nQuantidade: %d\n", temp->id, temp->titulo, temp->autor, temp->quantidade);
                break;
            } 
            temp = temp->next;
        }

        if (temp == NULL) {
            printf("\nNão existe livro com este titulo\n");
        }
    }
}

void atualizarLivroPorId(Livro **head) {
    if (*head == NULL) {
        printf("\nLista Vazia\n");
    } else {
        int idBusca;
        printf("Digite o ID do livro que deseja atualizar: ");
        scanf("%d", &idBusca);
    
        Livro *temp = *head;
        while (temp != NULL) {
            if (temp->id == idBusca) {
                printf("\nLivro encontrado. Dados atuais:\n");
                printf("Titulo: %s\nAutor: %s\nQuantidade: %d\n", temp->titulo, temp->autor, temp->quantidade);
    
                printf("\nDigite o novo titulo: ");
                scanf(" %[^\n]", temp->titulo);
    
                printf("Digite o novo autor: ");
                scanf(" %[^\n]", temp->autor);
    
                printf("Digite a nova quantidade: ");
                scanf("%d", &temp->quantidade);
    
                printf("\nLivro atualizado com sucesso!\n");
                break;
            }
            temp = temp->next;
        }
    
        if (temp == NULL) {
            printf("\nLivro com ID %d não encontrado.\n", idBusca);
        }

    }

}

void removerLivroPorId(Livro **head) {
    if (*head == NULL) {
        printf("\nLista Vazia\n");
        return;
    }

    int idBusca;
    printf("Digite o ID do livro que deseja remover: ");
    scanf("%d", &idBusca);

    Livro *temp = *head;
    Livro *anterior = NULL;

    if (temp != NULL && temp->id == idBusca) {
        *head = temp->next;
        printf("\nLivro '%s' removido com sucesso!\n", temp->titulo);
        free(temp);
    } else {
        while (temp != NULL && temp->id != idBusca) {
            anterior = temp;
            temp = temp->next;
        }
    
        if (temp == NULL) {
            printf("\nLivro com ID %d não encontrado.\n", idBusca);
            return;
        }
    
        anterior->next = temp->next;
        printf("\nLivro '%s' removido com sucesso!\n", temp->titulo);
        free(temp);
    }

}

