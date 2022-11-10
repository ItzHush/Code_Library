#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "构造函数" << endl;
    }
    ~Person()
    {
        cout << "析构函数" << endl;
    }
};

void a()
{
    Person p;
}

int main()
{
    a();
}