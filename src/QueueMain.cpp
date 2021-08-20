#include <iostream>
#include "Queue.h"
#include "LinkedList.h"

int main()
{

    LinkedListQueue Queue;
    int choice, element, front, rear;
    try
    {
        //Ask the user for size of queue
        std::cout << "Enter size of queue: ";
        std::cin >> Queue.maxQueueSize;
        do
        {
            //Ask the user for choice
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
                //Enqueue
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
                //Dequeue
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
                //Traverse
                Queue.traverse();
                break;

            case 4:
                //Front
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
                //Rear
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
                //Exit
                break;

            default:
                //Invalid choice
                std::cout << "Invalid choice" << std::endl;
                break;
            }
        } while (choice != 6);
    }
    catch (const char *message)
    {
        //Display error message
        std::cout << message << '\n';
    }
}