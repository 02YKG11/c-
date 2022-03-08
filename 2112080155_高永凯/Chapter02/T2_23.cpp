/*
*FileName: T2.23.cpp
*Author:     高永凯
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  进行最大值和最小值比较 
*/

#include <iostream>
using namespace std;
int main () {
	int max, min, num;
	max = num;
	min = num;
	for (int i = 1; i <= 5; i++) {
		cin >> num;
		if (num > max) {
			max = num;
		} else if (num < min) {
			min = num;
		}
	}
	cout << "max=" << max << endl;
	cout << "min=" << min << endl;
	return 0;
}
