#include<iostream>
using namespace std;
int yushu(int x, int y) {
	//x������ y����
	int u;
	u = x % y;
	return u;
}
int main() {
	int a, b, c;
	cout << "���뱻��������";
	cin >> a;
	cout << "���뱻����ָ��";
	cin >> b;
	c = pow(a, b);
	cout << "���������";
	int k;//����
	cin >> k;
	int yu = yushu(c, k);
	cout << "����Ϊ��" << yu;
	system("spause");
}
