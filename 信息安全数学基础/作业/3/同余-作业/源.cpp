#include<iostream>
#include<cmath>
using namespace std;
//bool sushu(int x) {
//	//�ж��Ƿ�Ϊ����
//	if (x == 2) { return 1; }
//	for (int i = 2; i <= x-1; i++) {
//		if (x % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int f(int x) {
//	//ŷ������
//	// p-1/p
//	int k = x ;
//	int s1 = 1;//���� p-1�ĳ˻�
//	int s2 = 1;//��ĸ p�ĳ˻�
//	for (int i = 2; i <= k; i++) {
//		if (x % i == 0) {
//			if (sushu(i) == 1) {
//				s1 *= (i-1);
//				s2 *= i;
//			}
//		}
//	}
//	return x * s1 / s2;
//}
//int niyuan(int M,int b,int m) {
//	//��˷���Ԫ
//	M = M % m;
//	long long N = pow(M, (f(m)-1)) * b;
//	N = N % m;
//	return N;
//}
//int main() {
//	// MN=b(mod m) ->  N=(M,f(M))*b
//	cout << "�����뷽�̸�����";
//	int n;
//	cin >> n;
//	int* M = new int[n];
//	int* N = new int[n];
//	int* b = new int[n];
//	int* m = new int[n];
//	cout << "��������������b�ͳ���m��" << endl;
//	for (int i = 0; i < n; i++) {
//		cout << "b" << i+1 << "   m" << i+1 << "  :";
//		cin >> b[i] >> m[i];
//	}
//	for (int i = 0; i < n; i++) {
//		M[i] = 1;
//		for (int j = 0; j < n; j++) {
//			if (i != j) { M[i] *= m[j]; }
//		}
//		//cout << "M[" << i + 1 << "]:" << M[i] << endl;
//	}
//	for (int i = 0; i < n; i++) {
//		N[i] = niyuan(M[i], 1, m[i]);
//		//cout << "N[" << i + 1 << "]:" << N[i] << endl;
//	}
//	int x=0;//���ս�
//	int ms=1;
//	for (int i = 0; i < n; i++) {
//		ms *= m[i];
//		x += N[i] * M[i] * b[i];
//	}
//	cout << "���ս�Ϊ �� x��" << x%ms<<"  (mod "<<ms<< ")";
//	delete[]M;
//	delete[]N;
//	delete[]b;
//	delete[]m;
//}

int main() {
	int x = 1,y = 6;
	while (y-->0) {
		cout << y << endl;
		x--;
	}
	cout << x << "  " << y;
}










//int main() 
//{
//	int x;
//	cout << "������һ����������";
//	cin >> x;
//	int result = f(x);
//	cout << "ŷ��������ֵΪ��" << result<<endl;	
//}