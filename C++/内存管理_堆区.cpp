#include <iostream>
using namespace std;

int *func()
{
    int *p = new int(10); //��new�����ݿ��ٵ�����
    return p;
}
int main()
{
    int *p = func();
    cout << *p << endl;
    return 0;
}