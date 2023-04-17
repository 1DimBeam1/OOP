#include "Graph.h"
template <typename T>
Node<T>* Graph<T>::getAdjListNode(T dest, Node<T>* head) {
    Node<T>* newNode = new Node<T>;
    newNode->val = dest;

    // указываем новый узел на текущую голову
    newNode->next = head;

    return newNode;

}


template<> Graph<int>::Graph(Edge<int> edges[], int n, int con){
    // выделить память
    head = new Node<int>*[N]();
    this->N = con;

    // инициализируем головной указатель для всех вершин
    for (int i = 0; i < N; i++) {
        head[i] = nullptr;
    }

    // добавляем ребра в ориентированный graph
    for (unsigned i = 0; i < n; i++)
    {
        int src = edges[i].src;
        int dest = edges[i].dest;

        // вставляем в начало
        Node<int>* newNode = getAdjListNode(dest, head[src]);

        // указываем головной указатель на новый узел
        head[src] = newNode;


    }
}
template <> Graph<int>::~Graph() {
    for (int i = 0; i < N; i++) {
        delete[] head[i];
    }

    delete[] head;
}


template<> void print(Node<int>* ptr) {
    while (ptr != nullptr)
    {
        cout << " -> " << ptr->val;
        ptr = ptr->next;
    }
    cout << endl;
}