#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "请输入分数" << endl;
    cin >> score;
    cout << "你输入的分数为" << score << endl;

    if (score > 600)
    {
        cout << "考上一本";
    }
    else if (score > 500)
    {
        cout << "考上二本";
    }
    else if (score > 400)
    {
        cout << "考上三本";
    }
    else
    {
        cout << "带专" << endl;
    }
    return 0;
}