#include<iostream>

using namespace std;

int main() {
	int n, i;
	cin >> n;
	int result = 0;
	for (i=n; i > 0; i--) {
		result += i;
	}
	cout << result;
	return 0;
}