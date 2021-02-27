#ifndef DATASTRUCTURES_NODE_H
#define DATASTRUCTURES_NODE_H

template<class T>
class Node {
private:
    T data;
    Node* next;
public:
    void setData(T value);
    T getData();

    Node getNext();
    void setNext(Node* nextNode);

};
#endif //DATASTRUCTURES_NODE_H
