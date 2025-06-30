/*******************************/
/* HEADER MODULO "codaBFS" */
/*******************************/

#ifndef CODABFS_H
#define CODABFS_H

#include <stdbool.h>  // Per usare il tipo bool

typedef struct elemBFS {
    int inf;
    struct elemBFS* pun;
} elemBFS;

typedef elemBFS* lista;

typedef struct {
    lista head;
    elemBFS* tail;
} codaBFS;

/* Prototipi delle funzioni */
codaBFS enqueue(codaBFS, int);
int dequeue(codaBFS*);              // Passaggio per riferimento simulato
int first(codaBFS);
bool isEmpty(codaBFS);              // Usa il tipo bool da stdbool.h
codaBFS newQueue();
static elemBFS* new_elem(int);

#endif /* CODABFS_H */