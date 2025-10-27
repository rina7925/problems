#include <iostream>
using namespace std;

int main() {
	cout << "enter 0 for a number  or 1 for character";
	int a; cin >> a;
	switch (a) {
	case 0: {
		cout << "enter a number";
		int x; cin >> x;
		if (1 <= x <= 26) {
			cout << "yes";
		}
		else
			cout << "no";
		break;
	}
	case 1: {
		cout << "enter a character";
		char x; cin >> x;
		int y = (int)x;
		if (1 <= y <= 26) {
			cout << "yes";
		}
		else
			cout << "no";
		break;
	}
	default: {
		cout << "wrong entry";
		break;
	}
	}
	return 0;
}