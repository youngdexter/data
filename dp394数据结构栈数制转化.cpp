//dp394数据结构栈数制转化
/*
number n:11
d:2
1011
*/
#include <iostream>
using namespace std;

#define size 100
int a[size + 1]; //存储进制位上的数

int n; //十进制数 n
int d; //要转化的进制
int i = 0; //进制位变化
int j; //循环变量
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