#include <stdio.h>
#define PI 3.141592653589793238462643383279 //在ansi c里面没有const ，用#difine定义，
#define dayin "%lf"

int main()
{
    printf(dayin, 2 * PI);
    return 0;
}