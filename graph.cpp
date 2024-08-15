#include <stdio.h>

// Define the maximum number of vertices (adjust as needed)
#define MAX_VERTICES 100

// Function to check if the graph is fully connected
int isFullConnectedGraph(int adjMatrix[MAX_VERTICES][MAX_VERTICES], int numVertices) {
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            if (i != j && adjMatrix[i][j] == 0) {
                // There is no edge between vertices i and j
                return 0; // Not fully connected
            }
        }
    }
    return 1; // Fully connected
}

int main() {
    int numVertices;
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);

    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
    printf("Enter the adjacency matrix (0 or 1):\n");
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            scanf("%d", &adjMatrix[i][j]);
        }
    }

    int result = isFullConnectedGraph(adjMatrix, numVertices);
    if (result)
        printf("The graph is fully connected.\n");
    else
        printf("The graph is not fully connected.\n");

    return 0;
}

