#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "���������" << endl;
    cin >> score;
    cout << "������ķ���Ϊ" << score << endl;

    if (score > 600)
    {
        cout << "����һ��";
    }
    else if (score > 500)
    {
        cout << "���϶���";
    }
    else if (score > 400)
    {
        cout << "��������";
    }
    else
    {
        cout << "��ר" << endl;
    }
    return 0;
}