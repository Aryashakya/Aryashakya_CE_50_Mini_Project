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

class LinkedListQueue
{
public:
    void enqueue(int data);
    int dequeue();
    int front();
    int rear();
    void traverse();
    bool isEmpty();
    bool isFull();
    int maxQueueSize;

private:
    int count;
    Node *q = nullptr;
};

#endif