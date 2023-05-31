#ifndef NODE_H
#define NODE_H

#include <ostream>
#include <iostream>

using std::cout;
using std::endl;

using std::ostream;

template <typename T>
class Node
{
private:
    T data;
    Node<T> *next;

public:
    Node()
    {
        this->data = NULL;
        this->next = nullptr;
    }
    Node(T value)
    {
        data = value;
        next = nullptr;
    }
    ~Node()
    {
        delete next;
    }
    T getData()
    {
        return this->data;
    }
    Node<T> *getNext()
    {
        return this->next;
    }
    void setNext(Node<T> *next)
    {
        this->next = next;
    }
    friend ostream &operator<<(ostream &os, Node<T> *node)
    {
        os << node->getData();

        if (node->getNext() != nullptr)
        {
            os << node->getNext();
        }

        return os;
    }
};

#endif