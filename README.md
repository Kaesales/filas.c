# Filas (Queues)

Uma fila (ou "queue" em inglês) é uma estrutura de dados que segue o princípio FIFO (First In, First Out), onde o primeiro elemento adicionado é o primeiro a ser removido. É uma estrutura bastante útil em muitas aplicações de programação e algoritmos.

## Conceito Básico

- **FIFO**: O primeiro elemento a entrar é o primeiro a sair.
- **Enqueue**: Operação de adicionar um elemento ao final da fila.
- **Dequeue**: Operação de remover um elemento do início da fila.

## Representação

Uma fila pode ser visualizada como uma linha de pessoas em um caixa de supermercado. As pessoas entram pela parte de trás e saem pela frente.


## Operações Principais

1. **Enqueue(element)**: Adiciona um `element` ao final da fila.
2. **Dequeue()**: Remove e retorna o elemento do início da fila.
3. **Peek()**: Retorna o elemento do início da fila sem removê-lo.
4. **IsEmpty()**: Verifica se a fila está vazia.

## Exemplo em Pseudocódigo

```pseudo
Fila:
    elementos = []

    Enqueue(element):
        Adicionar element ao final da lista elementos

    Dequeue():
        Se a lista elementos não estiver vazia:
            Retornar e remover o primeiro elemento da lista elementos
        Caso contrário:
            Retornar erro "Fila vazia"

    Peek():
        Se a lista elementos não estiver vazia:
            Retornar o primeiro elemento da lista elementos
        Caso contrário:
            Retornar erro "Fila vazia"

    IsEmpty():
        Retornar se a lista elementos estiver vazia


