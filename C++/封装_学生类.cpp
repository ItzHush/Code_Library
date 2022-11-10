#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    //属性
    string m_Name;
    int m_id;
    //行为
    void showstudent()
    {
        cout << "姓名: " << m_Name << "\t"
             << "学号: " << m_id << endl;
    }
};

int main()
{
    //创建一个具体对象
    student s1;
    s1.m_id = 1;
    s1.m_Name = "张三";
    s1.showstudent(); //显示学生信息
}