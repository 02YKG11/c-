/*
*FileName: T2.17.cpp
*Author:     ������
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  ��������ָ�������� 
*/

#include <iostream>
using namespace std;
int main () {
	cout << "���������أ�ǧ�ˣ�����ߣ��ף���" << endl;
	int weight;
	float high, BMI;
	cin >> weight ;
	cin >> high;
	BMI = weight / ( high * high );
	if (BMI >= 18.5) {
		if (BMI >= 25) {
			if (BMI >= 30) {
				cout << "Obese." << endl;
			} else {
				cout << "Overweight." << endl;
			}
		} else {
			cout << "Normal." << endl;
		}
	} else {
		cout << "Underweight." << endl;
	}
	return 0;
}
