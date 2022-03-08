/*
*FileName: T2.25.cpp
*Author:     高永凯
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  判断数字间是否为倍数关系
*/

#include <iostream>
using namespace std;
int main () {
	int num1,num2;
	cin >> num1>>num2;
	if(num2%num1==0){
		cout<<"是"<<endl;
		}
	    else if(num2%num1!=0){
				cout<<"否"<<endl;
		}
return 0;
}
