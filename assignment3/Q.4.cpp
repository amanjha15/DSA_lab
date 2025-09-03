#include <iostream>
#include <stack>
using namespace std;

int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    if(op == '^') return 3;
    return 0;
}

string infixToPostfix(string expr) {
    stack<char> st;
    string result = "";
    for(char ch : expr) {
        if(isalnum(ch)) {
            result += ch;
        }
        else if(ch == '(') {
            st.push(ch);
        }
        else if(ch == ')') {
            while(!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && precedence(ch) <= precedence(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
    return result;
}

int main() {
    string expr = "Aman*abcd/dede";
    cout << "Postfix: " << infixToPostfix(expr) << endl;
    return 0;
}
