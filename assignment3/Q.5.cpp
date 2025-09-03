#include <iostream>
#include <stack>
using namespace std;

int evaluatePostfix(string expr) {
    stack<int> st;
    for(char ch : expr) {
        if(isdigit(ch)) {
            st.push(ch - '0'); // convert char digit to int
        } 
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            switch(ch) {
                case '+': st.push(a + b); break;
                case '-': st.push(a - b); break;
                case '*': st.push(a * b); break;
                case '/': st.push(a / b); break;
            }
        }
    }
    return st.top();
}

int main() {
    string expr = "421*+9-"; 
    cout << "Result: " << evaluatePostfix(expr) << endl;
    return 0;
}
