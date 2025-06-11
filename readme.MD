# 📚 Sistema de Gerenciamento de Livros em C
Este é um sistema simples de gerenciamento de livros desenvolvido em linguagem C. Ele permite cadastrar, listar, buscar, atualizar, remover, emprestar e devolver livros. Os dados são armazenados em memória por meio de uma lista encadeada.

## 🧠 Funcionalidades
- 📥 Cadastro de novos livros com título, autor e quantidade.
- 📋 Listagem de todos os livros cadastrados.
- 🔍 Busca de livro por título.
- ✏️ Atualização de livro por ID.
- ❌ Remoção de livro por ID.
- 📤 Empréstimo de livro (reduz a quantidade disponível).
- 📥 Devolução de livro (aumenta a quantidade disponível).
- 🎨 Interface em terminal com arte ASCII para melhor apresentação.

## 💻 Compilação💻
1. Clone o repositório
```
git clone https://github.com/GMiranda21ML/Biblioteca-C.git
cd Biblioteca-C
```
2. Rode o código
```
make run
```

## 🛠️ Tecnologias Utilizadas
- Linguagem C
- Biblioteca padrão (stdio.h, stdlib.h, string.h)
- Listas encadeadas para armazenar os livros dinamicamente

## 📌 Observações
Os dados não são salvos em arquivos, portanto, ao encerrar o programa, o conteúdo é perdido.

IDs são gerados automaticamente e únicos por execução.