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

    int countAndDelete(int key) {
        int count = 0;
        while (head && head->data == key) {
            Node* d = head;
            head = head->next;
            delete d;
            count++;
        }
        Node* t = head;
        while (t && t->next) {
            if (t->next->data == key) {
                Node* d = t->next;
                t->next = d->next;
                delete d;
                count++;
            } else t = t->next;
        }
        return count;
    }

    void display() {
        Node* t = head;
        while (t) { cout << t->data << " "; t = t->next; }
        cout << endl;
    }
};

int main() {
    LinkedList l;
    int n, val, key;
    cout<<"enter length";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout<<"enter value";
        cin >> val;
        l.insertAtEnd(val);
    }
    cout<<"enter key";
    cin >> key;
    cout << "Original list: ";
    l.display();
    int cnt = l.countAndDelete(key);
    cout << "Occurrences of " << key << ": " << cnt << endl;
    cout << "deleting the repeated parts list: ";
    l.display();
    return 0;
}
