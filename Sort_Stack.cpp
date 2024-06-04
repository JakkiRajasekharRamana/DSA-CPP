#include <bits/stdc++.h>

using namespace std;

template <typename T,int size>

class Stack{
private:
    T a[size];
    int top;
public:
    Stack(){
        top=-1;
    }

    void push(int x){
        top++;
        a[top]=x;
    }

    void pop(){
        top--;
    }

    bool isEmpty(){
        if(top==-1)
            return true;
        else   
            return false;
    }

    bool isFull(){
        if(top==size)
            return true;
        else
            return false;
    }

    void displayItems(){
        for(int i=0;i<=top;i++){
            cout<<a[i]<<" ";
        }
    }

    void Reversed(){
        for(int i=top;i>=0;i--){
            cout<<a[i]<<" ";
        }
    }

    int peek(){
        return a[top];
    }
    void SortStack(Stack<int,5>& s){
        
        Stack<int,5> aux;
        while(!s.isEmpty()){
            
            int max=s.peek();
            s.pop();
            while((!aux.isEmpty()) && (max<aux.peek())){
                s.push(aux.peek());
                aux.pop();
            }
            aux.push(max);
        }
        
       while(!aux.isEmpty()){
        s.push(aux.peek());
        aux.pop();
       }
    }

};

int main(){

    Stack<int,5> a;

    a.push(7);
    a.push(1);
    a.push(2);
    a.push(5);

    cout << "Original Stack: ";
    a.displayItems();


    a.SortStack(a);

    cout << "\nSorted Stack: ";
    a.Reversed();


    return 0;
}