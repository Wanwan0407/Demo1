#include<iostream>
using namespace std;
bool sushu(int x) {
	//�ж��Ƿ�Ϊ����
	if (x == 2) { return 1; }
	for (int i = 2; i <= x-1; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}
int f(int x) {
	//�����ĳ˻�
	// p-1/p
	int k = x ;
	int s1 = 1;//���� p-1�ĳ˻�
	int s2 = 1;//��ĸ p�ĳ˻�
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
	cout << "������һ����������";
	cin >> x;
	int result = f(x);
	cout << "ŷ��������ֵΪ��" << result<<endl;	
}