#ifndef DATASTRUCTURES_SIMPLELIST_H
#define DATASTRUCTURES_SIMPLELIST_H
#include "../Node.h"

template <class T>
class SimpleList{
private:
    Node<T> *head;
public:

    SimpleList();

    bool isEmpty();

    Node<T> getNode(int pos);

    Node<T> getHead();

    Node<T> getPosition(int pos);

    void insert(int pos, T value);

    void insertHead(T value);

    int getSize();

    void deleteNode(int pos);

};
#endif //DATASTRUCTURES_SIMPLELIST_H
