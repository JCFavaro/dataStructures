#include "Node.h"

template <class T>
void Node<T>::setData(T value) {
    this->data = value;
}

template <class T>
T Node<T>::getData() {
    return this->data;
}

template <class T>
void Node<T>::setNext(Node<T> *nextNode) {
    this->next = nextNode;
}

template <class T>
Node<T> Node<T>::getNext(){
    return this->next;
}
