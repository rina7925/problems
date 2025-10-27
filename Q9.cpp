#include <iostream>
using namespace std;

int main() {
	cout "enter how many numbers you want to enter: ";
	int x;
	cin >> x;
	int arr[x];
	for (int i = 0; i < x; i++) {
		cout "enter number " ;
		cin >> arr[i];
	}
	int max = arr[0];
	for (int i = 1; i < x; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	int sum = 0;
	for (int i = 0; i < x; i++) {
		sum += (max - arr[i]);
	}
	cout << sum;
	return 0;
}