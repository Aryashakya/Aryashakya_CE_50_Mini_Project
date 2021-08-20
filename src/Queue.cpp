#include "Queue.h"
#include "LinkedList.h"
#include <iostream>

//Enqueue : Inserts an element at the end of the queue
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

//Dequeue : Removes an element from the front of the queue
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

//Front : Returns the element at the front of the queue
int LinkedListQueue::front()
{
    return list.getHead();
}

//Rear : Returns the element at the end of the queue
int LinkedListQueue::rear()
{
    return list.getTail();
}

//Traverse : Traverses the queue and prints all the elements
void LinkedListQueue::traverse()
{
    list.traverse();
}

//isEmpty : Checks if the queue is empty
bool LinkedListQueue::isEmpty()
{
    return list.isEmpty();
}

//isFull : Checks if the queue is full
bool LinkedListQueue::isFull()
{
    return count == maxQueueSize;
}