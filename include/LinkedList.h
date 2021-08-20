#ifndef LinkedList_h
#define LinkedList_h

class Node
{
public:
    int info;
    Node *next;

    Node() : next(nullptr) {}
    Node(int info, Node *next) : info(info), next(next) {}
};

class LinkedList
{
public:
    LinkedList();
    bool isEmpty();
    void addToTail(int data);
    int removeFromHead();
    void traverse(char separator = ' ');
    int getHead();
    int getTail();

private:
    Node *TAIL;
};

#endif