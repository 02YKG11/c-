/*
*FileName: T2.28.cpp
*Author:     高永凯
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  分解出5位整数各个数字
*/

#include <iostream>
using namespace std;
int main () {
	int num, a1, a2, a3, a4, a5;
	cin >> num;
	a1 = num / 10000;
	a2 = (num - 10000 * a1) / 1000;
	a3 = (num - 10000 * a1 - 1000 * a2) / 100;
	a4 = (num - 10000 * a1 - 1000 * a2 - 100 * a3) / 10;
	a5 = (num - 10000 * a1 - 1000 * a2 - 100 * a3 - 10 * a4);
	cout << a1 << "   " << a2 << "   " << a3 << "   " << a4 << "   " << a5 << "   ";
return 0;
}
