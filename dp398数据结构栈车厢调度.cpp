//dp398数据结构栈车厢调度
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

int stack[N];//堆栈
int top; //栈顶指针

int a[N]; //出栈序列


int n;  //车厢数量

int main(int argc, char **argv) {
	cout << "n:";
	cin >> n;

	int i;
	cout << "a:";
	for (i = 1; i <= n; i++)
		cin >> a[i];

	top = 0;
	int cur = 1;//要进站的车厢号 1 2 3 4 5

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