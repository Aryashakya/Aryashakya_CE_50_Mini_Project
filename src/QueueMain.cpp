#include <iostream>
#include "Queue.h"
#include "LinkedList.h"

int main()
{

    new LinkedListQueue() ;
    int choice, max, element, front, rear;
    try
    {
        std::cout << "Enter size of queue: ";
        std::cin >> Queue.maxQueueSize;
        do
        {
            std::cout << "\nChoose one of the following: " << std::endl;
            std::cout << " 1. Enqueue " << std::endl;
            std::cout << " 2. Dequeue " << std::endl;
            std::cout << " 3. Traverse " << std::endl;
            std::cout << " 4. Front " << std::endl;
            std::cout << " 5. Rear " << std::endl;
            std::cout << " 6. Exit " << std::endl;
            std::cout << " Enter:- ";
            std::cin >> choice;

            switch (choice)
            {
            case 1:
                if (!Queue.isFull())
                {
                    std::cout << "Enter element to be enqueued: ";
                    int element;
                    std::cin >> element;
                    Queue.enqueue(element);
                }
                else
                {

                    std::cout << "\nCannot add \nQueue is full" << std::endl;
                }
                break;

            case 2:

                if (!Queue.isEmpty())
                {
                    element = Queue.dequeue();
                    std::cout << "Dequeued element: " << element << std::endl;
                }
                else
                {
                    std::cout << "\nCannot remove\nQueue is empty" << std::endl;
                }
                break;

            case 3:

                Queue.traverse();
                break;

            case 4:
                if (!Queue.isEmpty())
                {
                    front = Queue.front();
                    std::cout << "Front element: " << front << std::endl;
                }
                else
                {
                    std::cout << "\nQueue is empty" << std::endl;
                }
                break;

            case 5:
                if (!Queue.isEmpty())
                {
                    rear = Queue.rear();
                    std::cout << "Rear element: " << rear << std::endl;
                }
                else
                {
                    std::cout << "\nQueue is empty" << std::endl;
                }
                break;

            case 6:
                break;

            default:
                std::cout << "Invalid choice" << std::endl;
                break;
            }
        } while (choice != 6);
    }
    catch (const char *message)
    {
        std::cout << message << '\n';
    }
}