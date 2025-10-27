#include <iostream>
using namespace std;

int main() {
    int b,l;
    cout << "enter the wiegh of bob and limak ";
    cin >> b >> l;
    int year = 1;
    while (true) {
        b = b * 3;
        l = l * 2;
        if (b > l) {
            cout << year;
            break;
        }
        year++;
	}
    return 0;

}