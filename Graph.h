#ifndef OOP_TASK1__GRAPH_H
#define OOP_TASK1__GRAPH_H
#include <iostream>

using namespace std;
template <typename T>
struct Node{
    T val;
    Node* next;
};
template <typename T>
struct Edge{
    T src, dest;
};
template <typename T>
class Graph {
    int N;//общее количество узлов
    Node<T>* getAdjListNode(T, Node<T>*);
public:
    Node<int>  **head;//Массив указателей на Node для представления список смежности

    Graph(Edge<T>[], int, int);
    ~Graph();


};
template <typename T>
void print(Node<T>* );

#endif //OOP_TASK1__GRAPH_H
