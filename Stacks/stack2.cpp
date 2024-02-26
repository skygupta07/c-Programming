#include<iostream>
using namespace std;

class stack{
    private: 
    int size;
    int top;
    int* arr;

    public:

    stack(int n){
        size = n;
        arr = new int[n];
        top = -1;
    }

    void push(int d){
        if(top < size-1){
            top++;
            arr[top] = d;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    int pop(){
        if(top>=0){
            top--;
            return arr[top+1];
        }
        else{
            cout<<"stack underflow"<<endl;
            return -1;
        }
    }

    bool empty(){
        if(top == -1)
            return true;
        else
            return false;
    }

    bool full(){
        if(top == size-1)
            return true;
        else    
            return false;
    }
};

int main(){

    stack s(10);

    s.push(1);
    s.push(10);
    s.push(9);
    s.push(8);
    s.push(7);
    s.push(6);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);

    cout<<"stack empty? "<<s.empty()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    return 0;
}