#include "Graph.h"
int main() {
// массив ребер Graph
    Edge<int> edges[] =
            {
                    // пара {x, y} представляет ребро от `x` до `y`
                    {0, 1}, {1, 2}, {2, 0},
                    {2, 1}, {3, 2}, {4, 5}, {5, 4},{0,5}
            };

    // общее количество узлов в Graph (от 0 до 5)
    int N = 6;

    // вычисляем общее количество ребер
    int n = sizeof(edges)/sizeof(edges[0]);

    // построить Graph
    Graph<int> graph(edges, n, N);

    // вывести представление списка смежности Graph
    for (int i = 0; i < N; i++)
    {
        // печатаем заданную вершину
        cout << i;

        // печатаем все его соседние вершины
        print(graph.head[i]);
    }

    return 0;
}
