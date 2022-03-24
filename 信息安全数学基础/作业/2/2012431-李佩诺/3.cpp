#include<iostream>
using namespace std;
bool sushu(int m) {
	if (m == 2) { return 1; }
	int k = 2;
	while (k != m) {
		if (m % k == 0) { return 0; }
		else { k++; }
	}
	if (m == k) { return 1; }
}
int main() {
	int n;
	cin >> n;
	int m = n;
	int s=1;
	for (int i = 2;; i++) {
		if (sushu(i) == 1) {
			int r = m % i;
			while (1) {
				if (r == 0)
				{
					cout << i <<" ";
					s *= i;
					m /= i;
					r = m % i;
					if (r != 0) { break; }
				}
				else { break; }
			}
		}
		if (s == n) { return 0; }
	}
}