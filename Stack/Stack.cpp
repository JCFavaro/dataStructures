#include "Stack.h"

template<class T>
Stack<T>::Stack() {
    top = nullptr;
}

template<class T>
void Stack<T>::push(T data) {
    Node<T> *newNode;

    newNode = new Node<T>;

    newNode->setData(data);
    newNode->setNext(top);

    top = newNode;
}

template<class T>
T Stack<T>::pop() {
    Node<T> *aux = top;

    T value = top.getData();

    top = top.getNext();

    delete aux;

    return value;
}

template<class T>
bool Stack<T>::isEmpty() {
    return top == nullptr;
}

template<class T>
void Stack<T>::clear() {
    Node<T> *aux = top, *toDelete;

    if(top == nullptr) throw 405;

    while(aux != nullptr) {
        toDelete = aux;
        aux = aux->getNext();
        delete toDelete;
    }
}

template <class T>
Stack<T>::~Stack<T>() {
    clear();
}