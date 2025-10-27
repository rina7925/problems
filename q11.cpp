#include <iostream>
using namespace std;

int main() {
    cout << "enter 3 numbers  ";
    int a,b,c;
    cin >> a >>b>>c;
    int d = (a == b) ? c : ((a == c) ? b : -1);
        if (d == -1) {
            cout << "there is not a single num";
        }else
            cout << "the single num is " << d;
     return 0;

}
