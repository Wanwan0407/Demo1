#include<iostream>
#include<cmath>
using namespace std;
long long yushu(long long x, long long y) {
	//x������ y����
	long long u;
	u = x % y;
	return u;
}
int main() {
	long long a, b, c;
	cout << "���뱻��������";
	cin >> a;
	cout << "���뱻����ָ��";
	cin >> b;
	c = pow(a, b);
	cout << "���������";
	long long k;//����
	cin >> k;
	long long yu = yushu(c, k);
	cout << "����Ϊ��" << yu;
	system("pause");
}