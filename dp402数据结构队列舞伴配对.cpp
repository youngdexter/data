//dp402���ݽṹ����������
/*
m n:4 3
k:6
1 1
2 2
3 3
4 1
1 2
2 3
*/
#include <iostream>
using namespace std;

int a[101], b[101]; //�������У�a ��ʿ b Ůʿ
int f1 = 1; //a���ж���
int r1;   //a���ж�β
int f2 = 1; //b���ж���
int r2;   //b���ж�β

int k;  //k��(k<=100),������a[101],b[101]
int k1 = 1; //k1<=k,ѭ��������Ϊ��ѡ��k�����

int i;  //ѭ������


int main(int argc, char **argv) {
	int m, n; //a b ���ӵ�����
	cout << "m n:";
	cin >> m >> n;

	//��ʼ������
	for (i = 1; i <= m; i++)
		a[i] = i;
	for (i = 1; i <= n; i++)
		b[i] = i;
	//a b ���ӵĶ�β
	r1 = m;
	r2 = n;

	//k��
	cout << "k:";
	cin >> k;

	while (k1 <= k) {
		cout << a[f1] << " " << b[f2] << endl; //�������
		r1++;//��β����
		a[r1] = a[f1]; //�����Ƶ���β�Ŷ�
		f1++;//���׺���

		r2++;//��β����
		b[r2] = b[f2]; //�����Ƶ���β�Ŷ�
		f2++;//���׺���

		k1++;
	}
	return 0;
}