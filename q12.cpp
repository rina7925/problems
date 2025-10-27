#include <iostream>
using namespace std;

int main() {
    int arr[3];
    cout << "enter 3 numbers  ";
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i<0; i++) {
        if (arr[i] > arr[i + 1]) {
                int a = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = a;
        }
    }
    //sorting(arr,arr[2])
    cout << arr[1];
    return 0;

}
