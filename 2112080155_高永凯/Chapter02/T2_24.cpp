/*
*FileName: T2.24.cpp
*Author:     高永凯
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  寻找奇数偶数
*/

#include <iostream>
using namespace std;
int main () {
	int num;
	cin >> num;
	if(num%2==0){
		cout<<"偶数"<<endl;
		if(num%2!=0){
			cout<<"奇数"<<endl;
		} 
	}
return 0;
}
