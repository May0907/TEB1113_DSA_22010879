// ID: 22010879 
// NAME: CHEAH SUET MAY
// EMAIL: CHEAH_22010879@UTP.EDU.MY
// LAB: 6
#include <iostream>
#include <string>
using namespace std;
class Node {
public:
    string name;
    Node* next_ptr;
    Node(string name, Node* next_ptr = nullptr) { 
        this->name = name;
        this->next_ptr = next_ptr;
    }
};
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue(Node* front = nullptr) { 
        this->front = front;
        this->rear = front;
        if (front)
            front->next_ptr = nullptr;
    }
    void enqueue(Node* node) {
        if (!node)
            return;
        node->next_ptr = nullptr; 
        if (!front) { 
            front = node;
            rear = node;
        }
        else {
            rear->next_ptr = node; 
            rear = node;           
            rear->next_ptr = front;
        }
    }
    void display_queue() {
        Node* current = front;
        if (!current) {
            cout << "Queue is empty" << endl;
            return;
        }
        while (current != nullptr) {
            cout << current->name << " <- ";
            current = current->next_ptr;
        }
        cout << "NULL" << endl;
    }
    void dequeue() {
        if (!front) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = front;
        front = front->next_ptr;
        cout << "Removing: " << temp->name << endl;
        delete temp;
    }
};
int main() {
    Node* node1 = new Node("Ali");
    Node* node2 = new Node("Ahmed");
    Node* node3 = new Node("Alee");
    Node* node4 = new Node("Abu");
    Queue queue(node1);
    queue.enqueue(node2);
    queue.enqueue(node3);
    queue.enqueue(node4);
    queue.display_queue();
    queue.dequeue();
    cout << "After Dequeue: ";
    queue.display_queue();
    return 0;
}