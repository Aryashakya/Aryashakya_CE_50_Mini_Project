#include <iostream>
#include "LinkedList.h"

//Linked List constructor
LinkedList::LinkedList()
{
    TAIL = nullptr;
}

//Checks if the list is empty
bool LinkedList::isEmpty()
{
    return TAIL == nullptr;
}

//Traverses the list
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

//Removes the first node from the list
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

//Inserts a node at the end of the list
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

//Returns the data stored at the tail of the list
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

//Returns the data stored at the head of the list
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