#include <iostream>
using namespace std;

#define maxi 1000

class Stack {
    int top;

public:
    int a[maxi];

    Stack(){top=-1;}
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();

};

bool Stack::push(int x){
    if(top>=(maxi-1)){cout<<"Stack Overflow";return false;}
    else {a[++top]=x;cout<<x<<"Pushed into Stack"<<endl;return true;}
}

int Stack::pop(){
    if(top<0){cout<<"Stack Underflow";return 0;}
    else {int x = a[top--];return x;}
}

int Stack::peek(){
    if(top<0){cout<<"Stack Overflow";return 0;}
    else {return a[top];}
}

bool Stack::isEmpty(){return (top<0);}
/*
class Stack {
    int top;

public:
    char* a[maxi];

    Stack(){top=-1;}
    bool push(char x);
    char pop();
    char peek();
    bool isEmpty();

};

bool Stack::push(char x){
    if(top>=(maxi-1)){cout<<"Stack Overflow";return false;}
    else { *a[++top] = x;cout<<x<<"Pushed into Stack"<<endl;return true;}
}

char Stack::pop(){
    if(top<0){cout<<"Stack Underflow";return 0;}
    else {char x = *a[top--];return x;}
}

char Stack::peek(){
    if(top<0){cout<<"Stack Overflow";return 0;}
    else {return *a[top];}
}

bool Stack::isEmpty(){return (top<0);}
*/
int main(){
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() <<"Popped from stack\n";
/*

    s.push('a');
    s.push('b');
    s.push('c');
    cout << s.pop() <<"Popped from stack\n";*/

    return 0;
}
