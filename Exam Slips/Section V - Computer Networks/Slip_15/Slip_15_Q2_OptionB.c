/*
 * Slip 15 - Q2 Option B: Write a program to displays a Mesh Topology.
 *
 * Compile: gcc Slip_15_Q2_OptionB.c -o mesh_topology
 * Run: ./mesh_topology
 */

#include <stdio.h>

void displayMeshTopology(int num_nodes) {
    printf("--- Adjacency Matrix: %d-Node Mesh Topology ---\n\n", num_nodes);

    printf("     ");
    for (int i = 0; i < num_nodes; i++) {
        printf("N%d  ", i);
    }
    printf("\n");

    printf("   ");
    for (int i = 0; i < num_nodes; i++) {
        printf("----");
    }
    printf("--\n");

    for (int i = 0; i < num_nodes; i++) {
        printf("N%d | ", i);
        for (int j = 0; j < num_nodes; j++) {
            if (i == j) {
                printf(" 0  "); 
            } else {
                printf(" 1  "); 
            }
        }
        printf("\n");
    }

    int total_connections = (num_nodes * (num_nodes - 1)) / 2;
    printf("\nTotal physical links (cables) required: %d\n", total_connections);
}

int main() {
    int nodes = 5; 
    
    printf("Generating topology for %d nodes...\n\n", nodes);
    displayMeshTopology(nodes);
    
    return 0;
}
