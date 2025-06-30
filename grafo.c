#include "grafo.h"

graph new_graph(int n) {
    graph g;

    // Alloca n+1 liste di adiacenza (indice 0 non usato)
    g.node = calloc(n + 1, sizeof(adj_list));
    g.dim = n;

    return g;
}

// Aggiunge l’arco orientato (s, d) con peso w alla lista di adiacenza del nodo s
void add_arc(graph *g, int s, int d, float w) {
    adj_list new_node = malloc(sizeof(adj_list));
    new_node->node = d;
    new_node->weight = w;

    new_node->next = g->node[s];
    g->node[s] = new_node;
}

// Aggiunge l’arco non orientato (s,d) con peso w alla lista di adiacenza del nodo s e del nodo d
void add_edge(graph *g, int s, int d, float w) {
    add_arc(g, s, d, w);
    add_arc(g, d, s, w);
}

// Restituisce il numero n dei nodi del grafo
int get_dim(graph g) {
    return g.dim;
}

// Restituisce la testa della lista di adiacenza del nodo con identificativo in ingresso
adj_list get_adjlist(graph g, int id) {
    if(id <= 0 || id > g.dim)
        return NULL;
    return g.node[id];
}

// Restituisce l’identificativo del nodo contenuto nell’elemento della lista di adiacenza
int get_adjnode(struct adj_node* n) {
    if(n == NULL)
        return -1;
    return n->node;
}

// Restituisce il prossimo elemento della lista di adiacenza
adj_list get_nextadj(adj_list n) {
    if(n == NULL)
        return NULL;
    return n->next;
}

// Visita grafo
void print_graph(graph g) {
    for (int i = 1; i <= g.dim; i++) {
        printf("Nodo %d: ", i);
        adj_list curr = g.node[i];
        if (curr == NULL) {
            printf("nessun arco\n");
            continue;
        }
        while (curr != NULL) {
            printf("-> (nodo %d, peso %.2f) ", curr->node, curr->weight);
            curr = curr->next;
        }
        printf("\n");
    }
}

bool connected(graph g, struct adj_node node) {
    bool raggiunto[g.dim] = true;
    codaBFS coda = newQueue();
    enqueue(coda, node.node);
    
}