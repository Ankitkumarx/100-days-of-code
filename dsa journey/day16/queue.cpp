#include <iostream>
#include <queue>

int main() {
    // Create a queue of integers
    std::queue<int> myQueue;

    // Enqueue elements
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Display the front element
    std::cout << "Front element: " << myQueue.front() << std::endl;

    // Dequeue an element
    myQueue.pop();

    // Display the new front element
    std::cout << "Front element after dequeue: " << myQueue.front() << std::endl;

    // Check if the queue is empty
    if (myQueue.empty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty." << std::endl;
    }

    // Display the size of the queue
    std::cout << "Size of the queue: " << myQueue.size() << std::endl;

    return 0;
}
