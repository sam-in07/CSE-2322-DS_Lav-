#include <iostream>
using namespace std;


struct Node {
    int data;       
    Node* next;    

    
    Node(int val) : data(val), next(nullptr) {}
};

void insertNode(Node*& head, int value) {
    Node* newNode = new Node(value); 
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;  
        }
        temp->next = newNode;  
    }
}


void displayList(Node* head) {
    if (head == nullptr) {
        cout << "The list is empty!" << endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";  
        temp = temp->next;  
    }
    cout << "NULL" << endl; 
}

int main() {
    Node* head = nullptr;  
    int n, value;


    cout << "Enter the number of elements in the list: ";
    cin >> n;

 
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        insertNode(head, value);
    }


    cout << "The linked list is: ";
    displayList(head);

    return 0;
}
/*
Enter the number of elements in the list: 3
Enter element 1: 10
Enter element 2: 20
Enter element 3: 30
The linked list is: 10 -> 20 -> 30 -> NULL


*/