#ifndef Queue_h
#define Queue_h

class Node
{
public:
    int info;
    Node *next;

    Node() : next(nullptr) {}
    Node(int info, Node *next) : info(info), next(next) {}
};

class Queue
{
public:
    virtual void enqueue(int data) = 0;
    virtual int dequeue() = 0;
    virtual int front() = 0;
    virtual int rear() = 0;
    virtual void traverse() = 0;
    virtual bool isEmpty() = 0;
};

class LinkedListQueue : public Queue
{
public:
    void enqueue(int data);
    int dequeue();
    int front();
    int rear();
    void traverse();
    bool isEmpty();

private:
    Node *q = nullptr;
};

#endif