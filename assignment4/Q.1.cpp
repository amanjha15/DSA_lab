#include <iostream>
using namespace std;

class queue
{
public:
    int front, rear, c_size, m_size, q[30];
    void init(int max_size)
    {
        m_size = max_size;
        q[10] = {0};
        front = -1;
        rear = -1;
        c_size = 0;
    }
    void enqueue(int x)
    {
        if(rear==-1){
            front=0,rear=0;
        }
        if (rear < m_size - 1)
        {

            rear = rear++;
            q[rear] = x;

            rear++;

        }
        else
        {
            cout << "overflow";
        }
    }
    void dequeue()
    {
            if (front == -1)
            {
                cout<<"underflow";
            }
            else{
            front = (front + 1);
            }
        }
    void display(){
        for (int i=front;i<rear;i++){
            cout<<q[i];
        }
    }
    void isfull(){
        if(rear==m_size-1){
            cout<<"full";
        }
        else{cout<<"notfull"<<endl;}
    }
    void isempty(){
        if(front==-1 || front==rear){
            cout<<"empty";
        }
        else{cout<<"notempty"<<endl;}
    }
    void peek(){
        cout<<q[front]<<endl;
    }
};
int main()
{
    queue q;
    q.init(10);
    q.enqueue(5);
    q.enqueue(4);
    q.dequeue();
    q.display();
    q.isfull();
    q.peek();
}