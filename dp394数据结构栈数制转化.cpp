//dp394���ݽṹջ����ת��
/*
number n:11
d:2
1011
*/
#include <iostream>
using namespace std;

#define size 100
int a[size + 1]; //�洢����λ�ϵ���

int n; //ʮ������ n
int d; //Ҫת���Ľ���
int i = 0; //����λ�±�仯��ջ��
int j; //ѭ������
int main(int argc, char **argv) {
	cout << "number n:";
	cin >> n;
	cout << "d:";
	cin >> d;

	do {
		a[++i] = n % d;
		n = n / d;
	} while (n != 0);

	for (j = i; j >= 1; j--)
		cout << a[j];

	return 0;
}