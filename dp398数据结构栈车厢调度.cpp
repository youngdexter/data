//dp398���ݽṹջ�������
/*
n:5
a:3 5 4 2 1
Yes

n:5
a:3 1 5 4 2
No
*/
#include <iostream>
using namespace std;

const int N = 101;

int stack[N];//��ջ
int top; //ջ��ָ��

int a[N]; //��ջ����


int n;  //��������

int main(int argc, char **argv) {
	cout << "n:";
	cin >> n;

	int i;
	cout << "a:";
	for (i = 1; i <= n; i++)
		cin >> a[i];

	top = 0;
	int cur = 1;//Ҫ��վ�ĳ���� 1 2 3 4 5

	for (i = 1; i <= n; i++) {
		while (cur <= a[i])
			stack[++top] = cur++;
		if (stack[top] == a[i])
			--top;
		else {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}