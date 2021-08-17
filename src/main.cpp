#include <iostream>
#include "Queue.h"

int main()
{

    LinkedListQueue Queue;
    int choice;
    try
    {
        std::cout << "Enter size of queue: ";
        std::cin >> Queue.maxQueueSize;
        do
        {
            std::cout << "Choose one of the following: " << std::endl;
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
                std::cout << "Enter element to be enqueued: ";
                int element;
                std::cin >> element;
                Queue.enqueue(element);
                break;
            case 2:
                std::cout << "Dequeued element: " << Queue.dequeue() << std::endl;
                break;

            case 3:
                Queue.traverse();
                break;

            case 4:
                std::cout << "Front element: " << Queue.front() << std::endl;
                break;

            case 5:
                std::cout << "Rear element: " << Queue.rear() << std::endl;
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