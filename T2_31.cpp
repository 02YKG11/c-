/*
*FileName: T2.17.cpp
*Author:     ������
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  ����������ʡ������ 
*/

#include <iostream>
using namespace std;
int main () {
	cout << "��������ռݳ�Ӣ���������ռ����������أ�,����ÿ�������͵ļ۸�,����ͣ���������ͨ�зѡ�" << endl;
	double yingli, jiayouliang, jiage, tingche, tongxing, meijialunxingshijuli;
	cin >> yingli >> jiayouliang >> jiage >> tingche >> tongxing;
	meijialunxingshijuli = yingli / jiayouliang;
	cout << "���տ�����Ӣ������" << "\t" << yingli << endl;
	cout << "����ÿ�������ͼ۸�" << "\t" << jiage << endl;
	cout << "ÿ�������Ϳ���ʻ���룺" << "\t" << meijialunxingshijuli << endl;
	cout << "����ͣ���ѣ�" << "\t" << tingche << endl;
	cout << "����ͨ�зѣ�" << "\t" << tongxing << endl;

	return 0;
}
