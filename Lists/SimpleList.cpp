#include "SimpleList.h"

template <class T>
SimpleList<T>::SimpleList(){
    head = nullptr;
}

template <class T>
bool SimpleList<T>::isEmpty() {
    return head == nullptr;
}

template <class T>
Node<T> SimpleList<T>::getNode(int pos) {
    int actualPos = 0;
    Node<T> *aux = head;

    if(pos == 0) return head;

    while(actualPos < pos && aux != nullptr) {
        actualPos++;
        aux = aux->getNext();
    }

    if(aux == nullptr) throw 404;

    return aux->getData();
}

template <class T>
Node<T> SimpleList<T>::getHead() {
    return head;
}

template <class T>
int SimpleList<T>::getSize() {
    int size = 0;
    Node<T> *aux = head;

    while(aux != nullptr) {
        aux = aux->getNext();
        return size++;
    }
}

template <class T>
Node<T> SimpleList<T>::getPosition(int pos) {
    Node<T> *aux = head;
    int actualPos = 0;

    while(aux != nullptr && actualPos < pos) {
        actualPos++;
        aux = aux->getNext();
    }

    if (aux == nullptr) throw 404;

    return aux;
}

template <class T>
void SimpleList<T>::insert(int pos, T value) {
    Node<T> *aux = head, *newNode;
    int actualPos = 0;

    if(pos == 0) {
        newNode = new Node<T>;
        newNode->setData(value);
        newNode->setNext(head);
        head = newNode;
        return;
    }

    while(aux != nullptr && actualPos < pos - 1) {
        actualPos++;
        aux = aux->getNext();
    }

    if(aux == nullptr) throw 404;

    newNode = new Node<T>;
    newNode->setData(value);
    newNode->setNext(aux->getNext());
    aux->setNext(newNode);
}

template <class T>
void SimpleList<T>::insertHead(T value) {
    insert(0, value);
}

template <class T>
void SimpleList<T>::deleteNode(int pos) {
    Node<T> *aux = head, *toDelete;
    int actualPos = 0;

    while(aux != nullptr && actualPos < pos - 1) {
        actualPos++;
        aux = aux->getNext();
    }

    if(aux == nullptr) throw 404;

    if(pos == 0) {
        head = aux->getNext();
        delete aux;
        return;
    }

    if(aux->getNext() == nullptr) throw 405;

    toDelete = aux->getNext();
    aux->setNext(toDelete->getNext());

    delete toDelete;

}