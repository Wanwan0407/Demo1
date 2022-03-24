#include<iostream>
#include<cmath>
using namespace std;
long long yushu(long long x, long long y) {
	//x被除数 y除数
	long long u;
	u = x % y;
	return u;
}
int main() {
	long long a, b, c;
	cout << "输入被除数底数";
	cin >> a;
	cout << "输入被除数指数";
	cin >> b;
	c = pow(a, b);
	cout << "请输入除数";
	long long k;//除数
	cin >> k;
	long long yu = yushu(c, k);
	cout << "余数为：" << yu;
	system("pause");
}