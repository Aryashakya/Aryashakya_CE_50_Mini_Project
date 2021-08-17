#include "Queue.h"
#include <iostream>

void LinkedListQueue::enqueue(int data)
{
    Node *newNode = new Node();
    newNode->info = data;
    if (this->isEmpty())
    {
        q = newNode;
        count++;
    }
    else if (!this->isFull())
    {
        newNode->next = q->next;
        count++;
    }
    else if (this->isFull())
    {
        throw "Queue is full";
    }

    q->next = newNode;
    q = newNode;
}

int LinkedListQueue::dequeue()
{
    Node *top;
    int data;
    if (this->isEmpty())
    {
        throw "Queue is empty";
    }
    else
    {
        top = q->next;
        data = top->info;
        if (top == q)
        {
            q = nullptr;
            count--;
        }
        else
        {
            q->next = top->next;
            count--;
        }
        delete top;
        return data;
    }
}

int LinkedListQueue::front()
{
    if (!this->isEmpty())
    {
        return q->next->info;
    }
    else
    {
        throw "Queue is empty";
    }
}

int LinkedListQueue::rear()
{
    if (!this->isEmpty())
    {
        return q->info;
    }
    else
    {
        throw "Queue is empty";
    }
}

void LinkedListQueue::traverse()
{
    if (this->isEmpty())
    {
        std::cout << "List is Empty\n";
    }
    else
    {
        Node *top = q->next;
        if (top != nullptr)
        {
            do
            {
                std::cout << top->info << "  ";
                top = top->next;
            } while (top != q->next);
            std::cout << std::endl;
        }
    }
}

bool LinkedListQueue::isEmpty()
{
    return q == nullptr;
}

bool LinkedListQueue::isFull()
{
    return count == maxQueueSize;
}