#include <stdio.h>
#include <stdbool.h>
typedef struct date
{
    int day;
    int month;
    int year;
} a; // struct是结构组，存放结构数据
     // typedef重命名变量，让a代替struct date

bool isleap(a d);
int numofdays(a d); // d是个代指，输入函数的值就取代d

int main()
{
    a today, tommorow; //定义两个date的变量
    printf("请输入日期（年月日）\n");
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
    printf("明天的日期是%i-%i-%i", tommorow.year, tommorow.month, tommorow.day);
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