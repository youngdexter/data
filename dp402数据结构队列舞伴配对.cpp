//dp402数据结构队列舞伴配对
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

int a[101], b[101]; //两个队列，a 男士 b 女士
int f1 = 1; //a队列队首
int r1;   //a队列队尾
int f2 = 1; //b队列队首
int r2;   //b队列队尾

int k;  //k组(k<=100),受限于a[101],b[101]
int k1 = 1; //k1<=k,循环变量，为了选出k组舞伴

int i;  //循环变量


int main(int argc, char **argv) {
	int m, n; //a b 两队的人数
	cout << "m n:";
	cin >> m >> n;

	//初始化队列
	for (i = 1; i <= m; i++)
		a[i] = i;
	for (i = 1; i <= n; i++)
		b[i] = i;
	//a b 两队的队尾
	r1 = m;
	r2 = n;

	//k组
	cout << "k:";
	cin >> k;

	while (k1 <= k) {
		cout << a[f1] << " " << b[f2] << endl; //输出队首
		r1++;//队尾后移
		a[r1] = a[f1]; //队首移到队尾排队
		f1++;//队首后移

		r2++;//队尾后移
		b[r2] = b[f2]; //队首移到队尾排队
		f2++;//队首后移

		k1++;
	}
	return 0;
}