#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) { data = d; next = NULL; }
};

class LinkedList {
    Node* head;
public:
    LinkedList() { head = NULL; }

    void insertAtEnd(int d) {
        Node* n = new Node(d);
        if (!head) { head = n; return; }
        Node* t = head;
        while (t->next) t = t->next;
        t->next = n;
    }

    void reverse() {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void display() {
        Node* t = head;
        while (t) { cout << t->data << "->"; t = t->next; }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList l;
    int n, val;
    cout<<"enter n";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout<<"enter value";
        cin >> val;
        l.insertAtEnd(val);
    }
    cout << "Original list: ";
    l.display();
    l.reverse();
    cout << "Reversed list: ";
    l.display();
    return 0;
}
