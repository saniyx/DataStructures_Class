#include <iostream>
using namespace std;

// node structure
struct Node
{
    int data;                // data part
    Node* next;              // pointer to the next node
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node(); // allocate memory for new node
    newNode->data = value;      // set data
    newNode->next = nullptr;    // initialize next as null
    return newNode;  
}           

int main() {
    // create first node (head)
    Node* head = createNode(10);

    // create second node 
    Node* second = createNode(20);
    head->next = second;              // link first node to second

    cout << "nullptr" << endl; 

    // create third node
    Node * third = createNode(30);
    second->next = nullptr;          // link second node to third

    //Transverse and print the linked list
    Node* temp = head;               // start from head
    while (temp != nullptr) {
        cout << temp->data << " -> "; 
        temp = temp->next;          // move to next node

    }
     cout << "nullptr" << endl; 

    return 0; 
}

