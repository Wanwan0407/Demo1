#include<iostream>
#include<cmath>
using namespace std;
int yushu(int x, int y) {
	//x被除数 y除数
	int u;
	u = x % y;
	return u;
}
int main() {
	int a, b, c;
	cout << "a";
	cin >> a;
	cout << "b";
	cin >> b;
	c = pow(a, b);
	cout << "c";
	int k;//除数
	cin >> k;
	int yu = yushu(c, k);
	cout << "yu" << yu;
	system("pause");
}