#include <iostream>
using namespace std;

class Queue {
    char arr[100];
    int front, rear;
public:
    Queue() { front = 0; rear = 0; }
    void push(char c) { arr[rear++] = c; }
    void pop() { if(front < rear) front++; }
    bool empty() { return front == rear; }
    char getFront() { return arr[front]; }
};

int main() {
    string s;
    cin >> s;
    Queue q;
    int freq[256] = {0};

    for(char c : s) {
        freq[(int)c]++;
        q.push(c);
        while(!q.empty() && freq[(int)q.getFront()] > 1) q.pop();
        if(q.empty()) cout << -1 << " ";
        else cout << q.getFront() << " ";
    }
    return 0;
}
