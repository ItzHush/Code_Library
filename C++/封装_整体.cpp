#include <iostream>
using namespace std;
const double pi = 3.1415926;

class circle
{
public:
    int m_r;
    double caculate()
    {
        return 2 * pi * m_r;
    }
};

int main()
{
    circle c1;
    c1.m_r = 10;

    cout << "Բ���ܳ�Ϊ" << c1.caculate() << endl;//��.�������е���
}