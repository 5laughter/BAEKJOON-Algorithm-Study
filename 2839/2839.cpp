#include <iostream>

using namespace std;

int main() {
	int a, b, c, q1, q2, q3, result;
	cin >> a;
	b = a % 3;
	c = a % 5;
	if (b != 0 && c != 0 && a < 8) {
		cout << -1 << endl;
	}
	else {
		q1 = a / 5;
		q3 = (a - q1 * 5) % 3;
		while (q3 != 0) {
			q1 = q1 - 1;
			q3 = (a - q1 * 5) % 3;
		}
		q2 = (a - q1 * 5) / 3;
		result = q1 + q2;
		cout << result << endl;
	}
	return 0;
}