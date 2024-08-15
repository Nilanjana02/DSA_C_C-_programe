#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 6

int graph[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];
int numVertices;

void initializeGraph() {
    for (int i = 0; i < MAX_VERTICES; ++i) {
        visited[i] = false;
        for (int j = 0; j < MAX_VERTICES; ++j) {
            graph[i][j] = 0;
        }
    }
}

void addEdge(int u, int v) {
    graph[u][v] = 1;
    //graph[v][u] = 1; // Assuming an undirected graph
}

void dfs(int vertex) {
    visited[vertex] = true;
    printf("%d ", vertex);

    for (int i = 0; i < numVertices; ++i) {
        if (graph[vertex][i] && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);
    char p=0,q=1,r=2,s=3,t=4,u=5;
    initializeGraph();
    addEdge(p,q);
    addEdge(p,s);
    addEdge(p,t);
    addEdge(q,r);
    addEdge(q,s);
    addEdge(r,s);
    addEdge(r,u);
    addEdge(s,t);
    addEdge(s,u);

    // Assuming the graph is given as input (edges)
    // Add edges using addEdge(u, v) function

    printf("DFS traversal starting from vertex 0:\n");
    dfs(0);

    return 0;
}

