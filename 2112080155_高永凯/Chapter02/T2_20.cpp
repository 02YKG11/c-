/*
*FileName: T2.20.cpp
*Author:     高永凯
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  计算圆的周长，半径，面积
*/

#include <iostream>
using namespace std;
int main () {
 int r,d,c,s;
 cin >> r ;
 float π=3.14159; 
 d=2*r;
 c=2*π*r;
 s=π*r*r; 
 cout<<d<<endl;
 cout<<c<<endl;
 cout<<s<<endl;
 return 0;
}
