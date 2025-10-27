#include<iostream>
using namespace std;
class Qeueu {
    int size;
    int qeue[size];
    int front = -1;
    int rear = -1;

    int enqeue(int value) {
        if (rear == size - 1) {
            return -1;
        }
        else {
            if (rear == -1 && front == -1) {
                front++;
                rear++;
                qeue[rear] = value;
            }
            else {
                qeue[++rear] = value;
            }
        }
    }
    int deqeue() {
        if (front == -1 && rear == -1 && front >= rear) {
            return -1;
        }
        else {
            front++;


        }
    }
    int peek() {
        if (front != -1 && rear != -1 && front <= rear) {
            return qeue[front];
        }
        else return -1;
    }

}