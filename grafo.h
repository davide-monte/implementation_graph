#ifndef GRAFO_H
    #define GRAFO_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include "coda-bfs.h"

    // implementazione struttura lista di adiacenza per ogni nodo
    struct adj_node {
        int node;
        float weight;
        struct adj_node* next;
    };

    typedef struct adj_node* adj_list;

    // implementazione struttura grafo
    typedef struct {
        adj_list* node;
        int dim;
    } graph;

    // primitives
    graph new_graph(int n);
    void add_arc(graph *g, int s, int d, float w);
    void add_edge(graph *g, int s, int d, float w);
    int get_dim(graph g);
    adj_list get_adjlist(graph g, int id);
    int get_adjnode(struct adj_node* n);
    adj_list get_nextadj(adj_list n);
    void print_graph(graph g);

#endif