#include<iostream>
using namespace std;
int yushu(int x, int y) {
	//x被除数 y除数
	int u;
	u = x % y;
	return u;
}
int main() {
	int a, b, c;
	cout << "输入被除数底数";
	cin >> a;
	cout << "输入被除数指数";
	cin >> b;
	c = pow(a, b);
	cout << "请输入除数";
	int k;//除数
	cin >> k;
	int yu = yushu(c, k);
	cout << "余数为：" << yu;
	system("spause");
}
