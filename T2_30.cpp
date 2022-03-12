/*
*FileName: T2.17.cpp
*Author:     高永凯
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  身体质量指数计算器 
*/

#include <iostream>
using namespace std;
int main () {
	cout << "请输入体重（千克）与身高（米）。" << endl;
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
