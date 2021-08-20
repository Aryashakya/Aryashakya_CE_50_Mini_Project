#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
    TAIL = nullptr;
}

bool LinkedList::isEmpty()
{
    return TAIL == nullptr;
}

void LinkedList::traverse(char separator)
{
    if (this->isEmpty())
    {
        std::cout << "List is Empty\n";
    }
    else
    {
        Node *temp = TAIL->next;
        if (temp != nullptr)
        {
            do
            {
                std::cout << temp->info << separator;
                temp = temp->next;
            } while (temp != TAIL->next);
            std::cout << std::endl;
        }
    }
}

int LinkedList::removeFromHead()
{
    if (!this->isEmpty())
    {
        int data;
        data = TAIL->next->info;

        if (TAIL->next->next == TAIL->next)
        {
            TAIL->next = nullptr;
            TAIL = nullptr;
        }
        else
        {
            Node *temp = TAIL->next;
            TAIL->next = temp->next;
            TAIL->next = TAIL->next;
            delete temp;
        }

        return data;
    }
    else
    {
        throw "List is empty";
    }
}

void LinkedList::addToTail(int data)
{
    if (this->isEmpty())
    {
        Node *temp = new Node();
        temp->info = data;
        temp->next = temp;
        TAIL = temp;
        TAIL->next= temp;
    }
    else
    {
        Node *temp = new Node();
        temp->info = data;
        temp->next = TAIL->next;
        TAIL->next = temp;
        TAIL = TAIL->next;
    }
}

int LinkedList::getTail()
{
    if (TAIL != nullptr)
    {
        return TAIL->info;
    }
    else
    {
        throw "\nEmpty\n";
    }
}

int LinkedList::getHead()
{
    if (TAIL->next != nullptr)
    {
        return TAIL->next->info;
    }
    else
    {
        throw "\nEmpty\n";
    }
}