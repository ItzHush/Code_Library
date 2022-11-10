//内联函数类似函数宏，但功能性更强
#include <iostream>
using namespace std;

inline double square(double x)
{
    return x * x;
}

int main()
{
    int a, b;
    int c = 13;
    a = square(5.0);
    b = square(4.5 + 7.5);
    cout << "a =" << a << " b =" << b << endl;
    cout << "c =" << square(c++) << endl;
    cout << "now c = " << c << endl;
    return 0;
}