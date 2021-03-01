#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H

#include "../Node.h"

template <class T>
class Stack {
private:
    Node<T> top;
public:

    Stack();

    void push(T data);

    T pop();

    bool isEmpty();

    void clear();

    ~Stack();

};


#endif //DATASTRUCTURES_STACK_H
