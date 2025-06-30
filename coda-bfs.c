/*******************************/
/* DEFINIZIONE MODULO "codaBFS" */
/*******************************/

#include <stdlib.h>     // per malloc
#include <stdbool.h>    // per bool, true, false

#include "grafo.h"
#include "coda-bfs.h"

codaBFS enqueue(codaBFS c, int i) {
    elemBFS *e = new_elem(i);
    if (c.tail != NULL)
        c.tail->pun = e;
    c.tail = e;
    if (c.head == NULL)
        c.head = c.tail;
    return c;
}

/// @brief
/// @param c 
/// @return 
int dequeue(codaBFS* c) {
    int ris = c->head->inf;
    c->head = c->head->pun;
    return ris;
}

int first(codaBFS c) {
    return c.head->inf;
}

static elemBFS* new_elem(int n) {
    elemBFS* p = (elemBFS*) malloc(sizeof(elemBFS));
    p->inf = n;
    p->pun = NULL;
    return p;
}

bool isEmpty(codaBFS c) {
    return (c.head == NULL);
}

codaBFS newQueue() {
    codaBFS c = {NULL, NULL};
    return c;
}