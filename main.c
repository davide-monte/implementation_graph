#include "grafo.h"

int main() {
    graph g = new_graph(5);

    add_edge(&g, 1, 2, 0.2);
    add_edge(&g, 2, 3, 0.5);
    add_edge(&g, 3, 4, 0.5);
    add_edge(&g, 4, 2, 0.3);
    add_edge(&g, 4, 5, 0.7);
    add_edge(&g, 5, 2, 1.2);
    add_edge(&g, 5, 1, 0.1);

    printf("Dimensione grafo = %d\n", get_dim(g));
    printf("Visita grafo:\n");
    print_graph(g);
}