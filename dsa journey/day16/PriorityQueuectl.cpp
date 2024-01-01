#include <iostream>
#include <queue>

int main() {
    // Create a priority queue of integers (default is a max heap)
    std::priority_queue<int> myPriorityQueue;

    // Enqueue elements with different priorities
    myPriorityQueue.push(30);
    myPriorityQueue.push(10);
    myPriorityQueue.push(20);

    // Access the top (highest priority) element
    std::cout << "Top element: " << myPriorityQueue.top() << std::endl;

    // Dequeue the top element
    myPriorityQueue.pop();

    // Access the new top element
    std::cout << "Top element after dequeue: " << myPriorityQueue.top() << std::endl;

    // Check if the priority queue is empty
    if (myPriorityQueue.empty()) {
        std::cout << "Priority queue is empty." << std::endl;
    } else {
        std::cout << "Priority queue is not empty." << std::endl;
    }

    // Display the size of the priority queue
    std::cout << "Size of the priority queue: " << myPriorityQueue.size() << std::endl;

    return 0;
}
