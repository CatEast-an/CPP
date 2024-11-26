//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	int m_A, m_B;
//
//};
//Person operator+(Person& p1, Person& p2)//通过全局函数重载加法运算符
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//int main()
//{
//	Person p1, p2;
//	p1.m_A = 10;
//	p1.m_B = 1;
//	p2.m_A = 12;
//	p2.m_B = 2;
//	Person p3 = p1 + p2;
//	cout << "p3的m_A=" << p3.m_A << endl;
//	cout << "p3的m_B=" << p3.m_B << endl;
//	return 0;
//}