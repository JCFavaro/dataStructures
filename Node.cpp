#include "Node.h"

template <class T>
void Node<T>::setData(T value) {
   data = value;
}

template <class T>
T Node<T>::getData() {
    return data;
}

template <class T>
void Node<T>::setNext(Node<T> *nextNode) {
    this->next = nextNode;
}

template <class T>
Node<T> Node<T>::getNext(){
    return next;
}
