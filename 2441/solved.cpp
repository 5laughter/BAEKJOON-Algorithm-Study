#include<iostream>

using namespace std;

int main() {
	int n, i, j;
	cin >> n;
	int m = n;
	while (n != 0) {
		for (i = n; i < m; i++) {
			if (i == m) {
				break;
			}
			else {
				cout << " ";
			}
		}
		for (j = 0; j < n; j++) {
			cout << "*";
		}
		n -= 1;
		cout << endl;
	}
	return 0;
}