#include <iostream>
using namespace std;

class Queue {
    int arr[100], front, rear;
public:
    Queue() { front = rear = 0; }
    void push(int x) { arr[rear++] = x; }
    void pop() { if(front < rear) front++; }
    int getFront() { return arr[front]; }
    bool empty() { return front == rear; }
    int size() { return rear - front; }
    void rotate() { if(!empty()){ push(getFront()); pop(); } }
};

class Stack {
    Queue q;
public:
    void push(int x) {
        int n = q.size();
        q.push(x);
        for(int i=0;i<n;i++) q.rotate();
    }
    void pop() { if(!q.empty()) q.pop(); }
    int top() { return q.getFront(); }
    bool empty() { return q.empty(); }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() << endl; // 30
    s.pop();
    cout << s.top() << endl; // 20
    return 0;
}
