#include <iostream>
using namespace std;

int *func()
{
    int *p = new int(10); //用new将数据开辟到堆区
    return p;
}
int main()
{
    int *p = func();
    cout << *p << endl;
    return 0;
}