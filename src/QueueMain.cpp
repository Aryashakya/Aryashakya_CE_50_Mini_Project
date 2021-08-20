#include <iostream>
#include "Queue.h"
#include "LinkedList.h"

int main()
{

    LinkedListQueue Queue;
    int choice, max, element, front, rear;
    try
    {
        std::cout << "Enter size of queue: ";
        std::cin >> Queue.maxQueueSize;
        do
        {
            std::cout << "\nFull: " << Queue.isFull() << std::endl;
            std::cout << "Empty: " << Queue.isEmpty() << std::endl;
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

                    std::cout << "\nQueue is full" << std::endl;
                }
                break;
            case 2:
                element = Queue.dequeue();
                std::cout << "Dequeued element: " << element << std::endl;
                break;

            case 3:
                Queue.traverse();
                break;

            case 4:
                front = Queue.front();
                std::cout << "Front element: " << front << std::endl;
                break;

            case 5:
                rear = Queue.rear();
                std::cout << "Rear element: " << rear << std::endl;
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