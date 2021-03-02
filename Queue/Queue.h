#ifndef DATASTRUCTURES_QUEUE_H
#define DATASTRUCTURES_QUEUE_H

#include "../Node.h"

template <class T>
class Queue {
private:
    Node<T> *front, *final;
public:
    Queue();

    void enqueue(T value);

    T dequeue();

    T peek();

    bool isEmpty();

    ~Queue();
};


#endif //DATASTRUCTURES_QUEUE_H
