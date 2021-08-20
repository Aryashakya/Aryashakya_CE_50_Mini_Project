#ifndef Queue_h
#define Queue_h
#include "LinkedList.h"

class Queue
{
public:
    virtual void enqueue(int data) = 0;
    virtual int dequeue() = 0;
    virtual int front() = 0;
    virtual int rear() = 0;
    virtual void traverse() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class LinkedListQueue : public Queue
{
public:
    LinkedListQueue() {}
    void enqueue(int data);
    int dequeue();
    int front();
    int rear();
    void traverse();
    bool isEmpty();
    bool isFull();
    int maxQueueSize;
    int count;

private:
    LinkedList list;
};

#endif