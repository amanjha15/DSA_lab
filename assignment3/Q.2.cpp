#include <iostream>
using namespace std;

class Stack {
public:
    int maxlength = 50;
    char arr[50];
    int top = -1;

    void push() {
        char c;
        cout << "Enter character";
        cin >> c;
        if (top == maxlength - 1) {
            cout << "Overflow"<<endl;
        } else {
            top++;
            arr[top] = c;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Underflow\n";
        } else {
            cout << "Deleted " << arr[top] << endl;
            top--;
        }
    }

    void isEmpty() {
        if (top == -1) cout << "Stack is empty\n";
        else cout << "not empty";
    }

    void isFull() {
        if (top == maxlength - 1) cout << "Stack is full\n";
        else cout << "not full ";
    }

    void peek() {
        if (top == -1) cout << "Underflow\n";
        else cout << "Top element: " << arr[top] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "printing stack ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void reverseString() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        string rev = "";
        int a =top;
        while (a != -1) {
            rev += arr[a--];
        }
        cout << "Reversed string: " <<  rev<< endl;
    }

    void menu() {
        int choice;
        int flag = 1;
        while (flag) {
            cout << "\n1.Push  2.Pop  3.IsFull  4.IsEmpty  5.Peek  6.Display  7.ReverseString  8.Exit\n";
            cout << "Enter choice: ";
            cin >> choice;
            switch (choice) {
                case 1: push(); break;
                case 2: pop(); break;
                case 3: isFull(); break;
                case 4: isEmpty(); break;
                case 5: peek(); break;
                case 6: display(); break;
                case 7: reverseString(); break;
                case 8: flag = 0; break;
            }
        }
    }
};

int main() {
    Stack s;
    s.menu();
    return 0;
}
