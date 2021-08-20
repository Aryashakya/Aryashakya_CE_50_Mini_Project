#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
}

bool LinkedList::isEmpty()
{
    return HEAD == nullptr && TAIL == nullptr;
}

void LinkedList::traverse(char separator)
{
    if (this->isEmpty())
    {
        std::cout << "List is Empty\n";
    }
    else
    {
        Node *temp = HEAD;
        if (temp != nullptr)
        {
            do
            {
                std::cout << temp->info << separator;
                temp = temp->next;
            } while (temp != HEAD);
            std::cout << std::endl;
        }
    }
}

int LinkedList::removeFromHead()
{
    if (!this->isEmpty())
    {
        int data;
        data = HEAD->info;

        if (HEAD->next == HEAD)
        {
            std::cout << "dty\n";
            HEAD = nullptr;
            TAIL = nullptr;
        }
        else
        {
            std::cout << "dddty\n";
            Node *temp = HEAD;
            HEAD = temp->next;
            TAIL->next = HEAD;
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
        HEAD = temp;
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
    if (HEAD != nullptr)
    {
        return HEAD->info;
    }
    else
    {
        throw "\nEmpty\n";
    }
}