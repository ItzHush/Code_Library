#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "���캯��" << endl;
    }
    ~Person()
    {
        cout << "��������" << endl;
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