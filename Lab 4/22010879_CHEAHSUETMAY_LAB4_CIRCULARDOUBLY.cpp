#include <iostream>
#include <string>
using namespace std;
class Node {
public:
    string name;
    Node* next_ptr;
    Node* prev_ptr;
    Node(string name, Node* next_ptr = nullptr, Node* prev_ptr = nullptr) {
        this->name = name;
        this->next_ptr = next_ptr;
        this->prev_ptr = prev_ptr;
    }
};
class LinkedList {
private:
    Node* head;
    Node* tail;
public:
    LinkedList(Node* head = nullptr) {
        this->head = head;
        this->tail = head;
        if (head) {
            head->next_ptr = head;
            head->prev_ptr = head;
        }
    }
    void add_element(Node* node) {
        if (!node)
            return;

        if (!head) {
            head = node;
            tail = node;
            node->next_ptr = node;
            node->prev_ptr = node;
        }
        else {
            node->prev_ptr = tail;
            node->next_ptr = head;
            tail->next_ptr = node;
            head->prev_ptr = node;
            tail = node;
        }
    }
    void display_list() {
        Node* current = head;
        while (current) {
            cout << current->name << " <-> ";
            current = current->next_ptr;
        }
    }
    Node* get_head() const {
        return head;
    }
};
int main() {
    Node* node1 = new Node("Ali");
    Node* node2 = new Node("Ahmed");
    Node* node3 = new Node("Alee");
    LinkedList linkedlst(node1);
    linkedlst.add_element(node2);
    linkedlst.add_element(node3);
    linkedlst.display_list();
    return 0;
}

