#include<iostream>

using namespace std;

int main() {
	int n, i, j;
	cin >> n;
	while (n != 0) {
		for (i = 0; i < n; i++) {
			cout << "*";
		}
		n = n - 1;
		cout << endl;
	}
	return 0;
}