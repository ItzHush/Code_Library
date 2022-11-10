#include <stdio.h>
#include <stdbool.h>
typedef struct date
{
    int day;
    int month;
    int year;
} a; // struct�ǽṹ�飬��Žṹ����
     // typedef��������������a����struct date

bool isleap(a d);
int numofdays(a d); // d�Ǹ���ָ�����뺯����ֵ��ȡ��d

int main()
{
    a today, tommorow; //��������date�ı���
    printf("���������ڣ������գ�\n");
    scanf("%i %i %i", &today.year, &today.month, &today.day);

    if (today.day != numofdays(today))
    {
        tommorow.day = today.day + 1;
        tommorow.month = today.month;
        tommorow.year = today.year;
    }
    else if (today.month == 12)
    {
        tommorow.day = 1;
        tommorow.month = 1;
        tommorow.year = today.year + 1;
    }
    else
    {
        tommorow.day = 1;
        tommorow.month = today.month + 1;
        tommorow.year = today.year;
    }
    printf("�����������%i-%i-%i", tommorow.year, tommorow.month, tommorow.day);
    return 0;
}

int numofdays(a d)
{
    int days;
    const int dpm[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.month == 2 && isleap(d))
    {
        days = 29;
    }
    else
    {
        days = dpm[d.month - 1];
    }
    return days;
}
bool isleap(a d)
{
    bool leap = false;
    if (d.year % 4 == 0 || d.year % 100 == 0)
    {
        leap = true;
    }
    return leap;
}