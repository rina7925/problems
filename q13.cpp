#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "enter how many the players  ";
    cin >> x;
    char arr[x];
    int sum = 0;
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++) {
        if (arr[i] == arr[i + 1]) {
            sum++;
            if (sum >= 7) {
                cout << "yes";
                break;
            }
        }
        else {
            sum = 0;
        }
    }
    return 0;

}