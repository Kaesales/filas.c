markdown
Copiar código
# Fila em C

Este projeto é uma implementação simples de uma fila (queue) usando vetores em C. A fila é uma estrutura de dados que segue a política de FIFO (First In, First Out), onde o primeiro elemento adicionado é o primeiro a ser removido.

## Estrutura da Fila

A estrutura da fila é definida na seguinte forma:

```c
typedef struct {
    int front, rear, size;
    int array[MAX];
} Fila;
front: Índice do primeiro elemento da fila.
rear: Índice do último elemento da fila.
size: Número de elementos na fila.
array: Vetor que armazena os elementos da fila.
Funções Principais
inicializarFila(Fila *f)
Inicializa a fila, configurando front como 0, rear como -1 e size como 0.

filaVazia(Fila *f)
Verifica se a fila está vazia. Retorna 1 se a fila estiver vazia, caso contrário, retorna 0.

filaCheia(Fila *f)
Verifica se a fila está cheia. Retorna 1 se a fila estiver cheia, caso contrário, retorna 0.

enfileirar(Fila *f, int item)
Adiciona um item à fila. Se a fila estiver cheia, exibe uma mensagem de erro.

desenfileirar(Fila *f)
Remove um item da fila. Se a fila estiver vazia, exibe uma mensagem de erro e retorna -1.

exibirFila(Fila *f)
Exibe todos os elementos atuais da fila.

Exemplo de Uso
Aqui está um exemplo de como usar as funções da fila:

int main() {
    Fila f;
    inicializarFila(&f);

    enfileirar(&f, 10);
    enfileirar(&f, 20);
    enfileirar(&f, 30);

    exibirFila(&f);

    printf("Removido: %d\n", desenfileirar(&f));
    printf("Removido: %d\n", desenfileirar(&f));

    exibirFila(&f);

    return 0;
}
Compilação e Execução
Para compilar e executar o código, use o seguinte comando:


gcc -o fila fila.c
./fila

Considerações
A fila tem um tamanho máximo definido por MAX. Altere esse valor se precisar de uma fila maior ou menor.
O código lida com a fila circularmente, o que significa que após o rear atingir o final do vetor, ele volta para o início, permitindo um uso eficiente do espaço.
Contribuições
Sinta-se à vontade para enviar pull requests e melhorias para o código.

