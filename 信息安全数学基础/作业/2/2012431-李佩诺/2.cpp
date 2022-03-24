#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b;
	if (a < b) { c = b; b = a; a = c; }
	int r = a % b;
	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}
	cout << b;
}