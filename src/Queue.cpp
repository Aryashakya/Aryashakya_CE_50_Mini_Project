#include "Queue.h"
#include "LinkedList.h"
#include <iostream>

void LinkedListQueue::enqueue(int data)
{
    if (!this->isFull())
    {
        list.addToTail(data);
        count++;
    }
    else if (this->isFull())
    {
        std::cout << "\nQueue is Full\n";
    }
}

int LinkedListQueue::dequeue()
{
    if (!this->isEmpty())
    {
        int a = list.removeFromHead();
        count--;
        return a;
    }
    else
    {
        throw "\nQueue is empty\n";
    }
}

int LinkedListQueue::front()
{
    return list.getHead();
}

int LinkedListQueue::rear()
{
    return list.getTail();
}

void LinkedListQueue::traverse()
{
    list.traverse();
}

bool LinkedListQueue::isEmpty()
{
    return list.isEmpty();
}

bool LinkedListQueue::isFull()
{
    return count == maxQueueSize;
}