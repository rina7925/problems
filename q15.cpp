#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "enter the word";
    cin >> word;
    int x = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'h' || word[i] == 'H') {
            if (x == 1) {
                continue;
            }
            x++;
        }
        if ((word[i] == 'e' || word[i] == 'E') && x==1) {
            if (x == 2) {
                continue;
            }
            x++;
        }
        if ((word[i] == 'l' || word[i] == 'L') && x == 2) {
            if (x == 3) {
                continue;
            }
            x++;
        }
        if ((word[i] == 'l' || word[i] == 'L' )&& x == 3) {
            if (x == 4) {
                continue;
            }
            x++;
        }
        if ((word[i] == 'o' || word[i] == 'O' )&& x == 4) {
            if (x == 5) {
                continue;
            }
            x++;
        }
        if (x == 5) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    return 0;

    }