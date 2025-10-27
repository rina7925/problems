#include <iostream>
using namespace std;
int size=6;
class Stack{
    int arr[size];
    int top;
    public: 
    Stack(){
        return top=-1;
    }
    void push(int x){
        if (top==(arr.size()-1)){
            cout<<"it is full";
        }
        else{
            ++top;
            arr[top]=x;
        }
    }
    int pop(){
        if(top==-1){
            return -1;
        }
        else{
            delete arr[top];
            top--;
        }
    }
    int topvalue(){
        if(top==-1){
            return -1;
        }
        else{
            return arr[top];
        }
    }
}
int main(){
    Stack s1;
    s1.push(3);
    s1.push(4);
    cout<< "the top value" << s1.topvalue();
    cout<< "the top index" << s1.top;
    s1.pop();
    s1.push(5);
    s1.push(7);
    cout<< "the top value" << s1.topvalue();
    cout<< "the top index" << s1.top;
    return 0;
}