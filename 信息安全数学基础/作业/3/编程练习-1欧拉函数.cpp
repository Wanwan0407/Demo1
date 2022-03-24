#include<iostream>
using namespace std;
bool sushu(int x) {
	//判断是否为素数
	if (x == 2) { return 1; }
	for (int i = 2; i <= x-1; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}
int f(int x) {
	//因数的乘积
	// p-1/p
	int k = x ;
	int s1 = 1;//分子 p-1的乘积
	int s2 = 1;//分母 p的乘积
	for (int i = 2; i <= k; i++) {
		if (x % i == 0) {
			if (sushu(i) == 1) {
				s1 *= (i-1);
				s2 *= i;
			}
		}
	}
	return x * s1 / s2;
}
int main() 
{
	int x;
	cout << "请输入一个正整数：";
	cin >> x;
	int result = f(x);
	cout << "欧拉函数的值为：" << result<<endl;	
}