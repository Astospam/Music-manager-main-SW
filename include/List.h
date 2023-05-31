#ifndef LIST_H
#define LIST_H
#include <Node.h>
#include <ostream>
#include <iostream>

using std::cout;
using std::endl;

using std::ostream;

template <typename T>
class List
{
private:
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    List()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    List(List<T> &obj)
    {
        head = new Node<T>(obj.getHead());
        tail = new Node<T>(obj.getTail());
        size = obj.getSize();

    }
    Node<T> *getHead()
    {
        return this->head;
    }
    Node<T> *getTail()
    {
        return this->tail;
    }
    int getSize()
    {
        return size;
    }
    ~List()
    {
        Node<T> *current = head;
        while (current != nullptr)
        {
            Node<T> *next = current->getNext();
            delete current;
            current = next;
        }
    }
    void add(T value)
    {
        Node<T> *temp = new Node<T>(value);
        if (head == nullptr)
        {
            head = temp;
            head->setNext(temp);
            tail = temp;
            tail->setNext(nullptr);
        }
        else
        {
            tail->setNext(temp);
            tail = tail->getNext();
        }
        size++;
    }
    void remove(T data)
    {
        Node<T> *current = head;
        Node<T> *previous = nullptr;
        while (current != nullptr)
        {
            if (current->getData() == data)
            {
                if (previous != nullptr)
                {
                    previous->setNext(current->getNext());
                }
                if (current == head)
                {
                    head = current->getNext();
                }
                if (current == tail)
                {
                    tail = previous;
                }
                delete current;
                size--;
                return;
            }
            previous = current;
            current = current->getNext();
        }
    }

    void addLinked(List<T> &linkedlist)
    {
        Node<T> *current = linkedlist.head;
        while (current != nullptr)
        {
            add(current);
            current = current->getNext();
        }
    }

    void removeLinked(List<T> &linkedlist)
    {
        Node<T> *current = linkedlist.head;
        while (current != nullptr)
        {
            remove(current);
            current = current->getNext();
        }
    }

    friend ostream &operator<<(ostream &os, List *list)
    {
        os << list->getHead();

        return os;
    }

    List<T> operator+(List<T> &linkedlist)
    {
        List<Music *> *musics = new List<Music *>(this);
        musics->addLinked(linkedlist);
        return musics;
    } 

    void operator>>(Node<T> &no)
    {
        if (getHead() == nullptr)
        {
            no = nullptr;
        }
        else
        {
            no = getTail();
        } 
    }

    void operator<<(Node<T> &no)
    {
        if (no.getData()!=nullptr)
        {
            add(no.getData())
        }
    }
};

#endif