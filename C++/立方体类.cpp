#include <iostream>
using namespace std;

class Cube
{
private:
    int m_long;
    int m_wide;
    int m_high;

public:
    int setl(int l)
    {
        m_long = l;
    }
    int setw(int w)
    {
        m_wide = w;
    }
    int seth(int h)
    {
        m_high = h;
    }
    int S()
    {
        int a;
        a = 2 * (m_long * m_high + m_long * m_wide + m_wide * m_high);
        return a;
    }
    int V()
    {
        int b;
        b = m_wide * m_long * m_high;
        return b;
    }
};
int main()
{
    int l, w, h;
    cout << "�����볤���" << endl;
    cin >> l >> w >> h;
    Cube c1;
    c1.setl(l);
    c1.setw(w);
    c1.seth(h);
    cout << "����������Ϊ" << c1.S() << endl;
    cout << "���������Ϊ" << c1.V() << endl;
}
