#include <bits/stdc++.h>
using namespace std;
template <typename T, int maxSize>
class Stack {
private:
    T elements[maxSize];
    int top;
public:
    Stack(){
    top = -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == maxSize - 1;
    }
    void push(const T& element) {
        if (isFull()) {
        cout << "Stack is full" << endl;
        return;
    }
    top++;
    elements[top] = element;
    }
    void pop() {
        if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }  
    top--;
    }
    T& peek() {
        if (isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    return elements[top];
    }
    int size() {
        return top + 1;
    }
    void clear() {
        top = -1;
    }
};
