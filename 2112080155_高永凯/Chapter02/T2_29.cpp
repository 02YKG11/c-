/*
*FileName: T2.29.cpp
*Author:     ������
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  ������
*/

#include <iostream>
using namespace std;
int main () {
	int PF, LF;
	cout <<  "interger"  << " square" << "\t " << "cube" << endl;
	for (int i = 0; i <= 10; i++) {
		PF = i * i;
		LF = i * i * i;
		cout << i << "\t " << PF << "\t " << LF << endl;
	}
	return 0;
}
