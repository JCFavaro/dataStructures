#include "Queue.h"

template<class T>
Queue<T>::Queue() {
    front = nullptr;
    final = nullptr;
}

template<class T>
void Queue<T>::enqueue(T value) {
    auto *newNode = new Node<T>;
    newNode->setData(value);
    newNode->setNext(nullptr);

    if(final == nullptr) {
        front = newNode;
    } else {
        newNode->setNext(final);
    }
    final = newNode;
}

template<class T>
T Queue<T>::dequeue() {

    if(front == nullptr) throw 404;

    Node<T> *toDelete;
    T value;

    value = front->getData();
    toDelete = front;

    while(final != nullptr) {
        front = final->getNext();
    }

    if(final == nullptr) return value;

    delete toDelete;

    return value;
}

template <class T>
bool Queue<T>::isEmpty() {
    return front == nullptr;
}

template<class T>
T Queue<T>::peek() {
    if(front == nullptr) throw 404;

    return front->getData();
}

template <class T>
Queue<T>::~Queue<T>() {
    while(!isEmpty()) {
        dequeue();
    }
}