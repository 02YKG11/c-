/*
*FileName: T2.18.cpp
*Author:     ������
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  ���������Ƚ�
*/

#include <iostream>
using namespace std;
int main () {
	int a, b;
	cin >> a >> b;
	if (a != b) {
		if (a > b) {
			cout << "a is large.";
		} else {
			cout << "b is large.";
		}
	} else {
		cout << "These bunbers are equal.";
	}
	return 0;
}
