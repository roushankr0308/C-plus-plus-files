#include <iostream>
#include <cstdlib>
using namespace std;
 
// Define the default capacity of the queue
#define SIZE 10
 
// A class to represent a queue
template <class X>
class queue
{
    X *arr;         // array to store queue elements
    int capacity;   // maximum capacity of the queue
    int front;      // front points to the front element in the queue (if any)
    int rear;       // rear points to the last element in the queue
    int count;      // current size of the queue
 
public:
    queue(int size = SIZE);     // constructor
 
    void dequeue();
    void enqueue(X x);
    X peek();
    int size();
    bool isEmpty();
    bool isFull();
};
 
// Constructor to initialize a queue
template <class X>
queue<X>::queue(int size)
{
    arr = new X[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}
 
// Utility function to dequeue the front element
template <class X>
void queue<X>::dequeue()
{
    // check for queue underflow
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Removing " << arr[front] << endl;
 
    front = (front + 1) % capacity;
    count--;
}
 
// Utility function to add an item to the queue
template <class X>
void queue<X>::enqueue(X item)
{
    // check for queue overflow
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Inserting " << item << endl;
 
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}
 
// Utility function to return the front element of the queue
template <class X>
X queue<X>::peek()
{
    if (isEmpty())
    {
        cout << "UnderFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return arr[front];
}
 
// Utility function to return the size of the queue
template <class X>
int queue<X>::size() {
    return count;
}
 
// Utility function to check if the queue is empty or not
template <class X>
bool queue<X>::isEmpty() {
    return (size() == 0);
}
 
// Utility function to check if the queue is full or not
template <class X>
bool queue<X>::isFull() {
    return (size() == capacity);
}
 
int main()
{
    // create a queue of capacity 4
    queue<string> q(4);
 
    q.enqueue("a");
    q.enqueue("b");
    q.enqueue("c");
 
    cout << "The front element is " << q.peek() << endl;
    q.dequeue();
 
    q.enqueue("d");
 
    cout << "The queue size is " << q.size() << endl;
 
    q.dequeue();
    q.dequeue();
    q.dequeue();
 
    if (q.isEmpty()) {
        cout << "The queue is empty\n";
    }
    else {
        cout << "The queue is not empty\n";
    }
 
    return 0;
}