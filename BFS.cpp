#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

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
    graph[v][u] = 1; // Assuming an undirected graph
}

void bfs(int startVertex) {
    int queue[MAX_VERTICES];
    int front = -1, rear = -1;

    visited[startVertex] = true;
    queue[++rear] = startVertex;

    while (front != rear) {
        int currentVertex = queue[++front];
        printf("%d ", currentVertex);

        for (int i = 0; i < numVertices; ++i) {
            if (graph[currentVertex][i] && !visited[i]) {
                visited[i] = true;
                queue[++rear] = i;
            }
        }
    }
}

int main() {
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);

    initializeGraph();
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

    printf("BFS traversal starting from vertex 0:\n");
    bfs(0);

    return 0;
}

