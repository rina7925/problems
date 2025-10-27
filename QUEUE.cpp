#include<iostream>
using namespace std;
class Qeueu {
    int size = 6;
    int qeueu[size];
    int front = -1;
    int rear = -1;

    int enqeueu(int value) {
        if (rear == size - 1) {
            return -1;
        }
        else {
            if (rear == -1 && front == -1) {
                front++;
                rear++;
                qeueu[rear] = value;
            }
            else {
                qeueu[++rear] = value;
            }
        }
    }
    int deqeueu() {
        if (front == -1 && rear == -1 ) {
            return -1;
        }
        else {
            front++;
        }
    }
    int peek() {
        if (front != -1 && rear != -1 ) {
            return qeueu[front];
        }
        else return -1;
    }
}
int main(){
    Qeueu q1;
    q1.enqeueu(3);
    q1.enqeueu(4);
    q1.deqeueu();
    q1.enqeueu(5);
    q1.enqeueu(7);
    cout<<q1.peek();
    return 0;
}
