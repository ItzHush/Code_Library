#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    //����
    string m_Name;
    int m_id;
    //��Ϊ
    void showstudent()
    {
        cout << "����: " << m_Name << "\t"
             << "ѧ��: " << m_id << endl;
    }
};

int main()
{
    //����һ���������
    student s1;
    s1.m_id = 1;
    s1.m_Name = "����";
    s1.showstudent(); //��ʾѧ����Ϣ
}