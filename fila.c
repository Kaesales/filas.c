#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int front, rear, size;
    int array[MAX];
} Fila;

void inicializarFila(Fila *f) {
    f->front = 0;
    f->rear = -1;
    f->size = 0;
}

int filaVazia(Fila *f) {
    return f->size == 0;
}

int filaCheia(Fila *f) {
    return f->size == MAX;
}

void enfileirar(Fila *f, int item) {
    if (filaCheia(f)) {
        printf("Fila cheia!\n");
        return;
    }
    f->rear = (f->rear + 1) % MAX;
    f->array[f->rear] = item;
    f->size++;
}

int desenfileirar(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return -1;
    }
    int item = f->array[f->front];
    f->front = (f->front + 1) % MAX;
    f->size--;
    return item;
}

void exibirFila(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return;
    }
    for (int i = 0; i < f->size; i++) {
        int index = (f->front + i) % MAX;
        printf("%d ", f->array[index]);
    }
    printf("\n");
}

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
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int front, rear, size;
    int array[MAX];
} Fila;

void inicializarFila(Fila *f) {
    f->front = 0;
    f->rear = -1;
    f->size = 0;
}

int filaVazia(Fila *f) {
    return f->size == 0;
}

int filaCheia(Fila *f) {
    return f->size == MAX;
}

void enfileirar(Fila *f, int item) {
    if (filaCheia(f)) {
        printf("Fila cheia!\n");
        return;
    }
    f->rear = (f->rear + 1) % MAX;
    f->array[f->rear] = item;
    f->size++;
}

int desenfileirar(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return -1;
    }
    int item = f->array[f->front];
    f->front = (f->front + 1) % MAX;
    f->size--;
    return item;
}

void exibirFila(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return;
    }
    for (int i = 0; i < f->size; i++) {
        int index = (f->front + i) % MAX;
        printf("%d ", f->array[index]);
    }
    printf("\n");
}

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
