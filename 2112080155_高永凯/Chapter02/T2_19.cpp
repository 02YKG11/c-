/*
*FileName: T2.19.cpp
*Author:     ������
*E-mail:      643800441@qq.com
*Date:         Mar 6th 2022
*College:    School of Computer Science and Information Engineering
*Function:  �����������㣬����ֵ
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main () {
 int a, b, c;
 cin >> a >> b >> c;
 cout << "Input three different integer:" << a << b << c << endl;
 int Sum, Average, Product, Smallest, Largest;
 Sum = a + b + c;
 cout << "Sum is " << Sum << endl;
 Average = (a + b + c) / 3;
 cout << "Average is " << Average << endl;
 Product = a * b * c;
 cout << "Product is " << Product << endl;
 Smallest = min({a, b, c});
 cout << "Smallest is " << Smallest << endl;
 Largest = max({a, b, c});
 cout << "Largest is " << Largest << endl;
 return 0;
}
