#include <iostream>
using namespace std;

class queue
{

    int q[10];
    int front, rear,msize;

public:
    queue()
    {
        front = -1;
        rear = -1;
    }
    void init(int maxsize) { msize = maxsize; }

    bool isEmpty()
    {
        return (front == -1);
    }

    bool isFull()
    {
        return ((rear + 1) % msize == front);
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "overflow\n";
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % msize;
        }
        q[rear] = x;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "underflow" << endl;
            return;
        }
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % msize;
        }
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << " Empty\n";
        }
        else
        {
            cout << "Front " << q[front] << endl;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << " Empty\n";
        }
        cout<<"printing";
        for (int i = 0; i < msize; i++)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    queue cq;
    cq.init(4);
    int choice, value;

    while (choice != 5)
    {

        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            cq.enqueue(value);
            break;
        case 2:
            cq.dequeue();
            break;
        case 3:
            cq.peek();
            break;
        case 4:
            cq.display();
            break;
        case 5:
            cout << "bye byen";
            break;

    }
}

    return 0;
}
