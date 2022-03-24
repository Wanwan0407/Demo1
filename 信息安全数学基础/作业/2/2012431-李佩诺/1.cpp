#include<iostream>
using namespace std;
int main() {
	cout << 2 << " ";
	for (int i = 3; i <= 1000000; i++) {
		int k = 2;
		while (k != i) {
			if (i % k == 0) { break; }
			else { k++; }
		}
		if (k == i) { cout << i << " "; }
	}
}
