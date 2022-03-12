/*
*FileName: T2.17.cpp
*Author:     高永凯
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  共乘汽车节省计算器 
*/

#include <iostream>
using namespace std;
int main () {
	cout << "请输入今日驾车英里数，今日加油量（加仑）,今日每加仑汽油的价格,今日停车费与今日通行费。" << endl;
	double yingli, jiayouliang, jiage, tingche, tongxing, meijialunxingshijuli;
	cin >> yingli >> jiayouliang >> jiage >> tingche >> tongxing;
	meijialunxingshijuli = yingli / jiayouliang;
	cout << "今日开车总英里数：" << "\t" << yingli << endl;
	cout << "今日每加仑汽油价格：" << "\t" << jiage << endl;
	cout << "每加仑汽油可行驶距离：" << "\t" << meijialunxingshijuli << endl;
	cout << "今日停车费：" << "\t" << tingche << endl;
	cout << "今日通行费：" << "\t" << tongxing << endl;

	return 0;
}
