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

    void insertAtHead(int d) {
        Node* n = new Node(d);
        n->next = head;
        head = n;
    }

    void insertAtEnd(int d) {
        Node* n = new Node(d);
        if (!head) { head = n; return; }
        Node* t = head;
        while (t->next) t = t->next;
        t->next = n;
    }

    void insertBefore(int val, int d) {
        if (!head) return;
        if (head->data == val) { insertAtHead(d); return; }
        Node* t = head;
        while (t->next && t->next->data != val) t = t->next;
        if (t->next) {
            Node* n = new Node(d);
            n->next = t->next;
            t->next = n;
        }
    }

    void insertAfter(int val, int d) {
        Node* t = head;
        while (t && t->data != val) t = t->next;
        if (t) {
            Node* n = new Node(d);
            n->next = t->next;
            t->next = n;
        }
    }

    void deleteAtHead() {
        if (!head) return;
        Node* t = head;
        head = head->next;
        delete t;
    }

    void deleteAtEnd() {
        if (!head) return;
        if (!head->next) { delete head; head = NULL; return; }
        Node* t = head;
        while (t->next->next) t = t->next;
        delete t->next;
        t->next = NULL;
    }

    void deleteValue(int val) {
        if (!head) return;
        if (head->data == val) { deleteAtHead(); return; }
        Node* t = head;
        while (t->next && t->next->data != val) t = t->next;
        if (t->next) {
            Node* d = t->next;
            t->next = d->next;
            delete d;
        }
    }

    void search(int val) {
        Node* t = head;
        int pos = 1;
        while (t) {
            if (t->data == val) { cout << "Found at position " << pos << endl; return; }
            t = t->next;
            pos++;
        }
        cout << "Not found" << endl;
    }

    void display() {
        Node* t = head;
        while (t) { cout << t->data << " "; t = t->next; }
        cout << endl;
    }
};

int main() {
    LinkedList l;
    int ch, val, d;
    while (1) {
        cout << "\n1.Insert at Head\n2.Insert at End\n3.Insert Before\n4.Insert After\n5.Delete Head\n6.Delete End\n7.Delete Value\n8.Search\n9.Display\n10.Exit\n";
        cin >> ch;
        switch (ch) {
        case 1: cin >> val; l.insertAtHead(val); 
        break;
        case 2: cin >> val; l.insertAtEnd(val); 
        break;
        case 3: cin >> val >> d; l.insertBefore(val, d); 
        break;
        case 4: cin >> val >> d; l.insertAfter(val, d); 
        break;
        case 5: l.deleteAtHead(); 
        break;
        case 6: l.deleteAtEnd(); 
        break;
        case 7: cin >> val; l.deleteValue(val);
         break;
        case 8: cin >> val; l.search(val);
         break;
        case 9: l.display(); 
        break;
        case 10:
         return 0;
        }
    }
}
