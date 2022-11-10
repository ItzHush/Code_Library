#include <stdio.h>
#include <math.h>
int main()
{ // 1,2,4, 3,5,6;
    int a, b;
    scanf("%d %d", &a, &b);
    if ((a == 7 || b == 7) &&(a != 0 && b != 0))
        printf("7");
    if (a == 1 && b == 1)
        printf("1");
    if (a == 1 && b == 2)
        printf("3");
    if (a == 1 && b == 4)
        printf("5");
    if (a == 1 && b == 3)
        printf("3");
    if (a == 1 && b == 5)
        printf("5");
    if (a == 1 && b == 6)
        printf("7");
    if (a == 2 && b == 1)
        printf("3");
    if (a == 2 && b == 2)
        printf("2");
    if (a == 2 && b == 4)
        printf("6");
    if (a == 2 && b == 3)
        printf("3");
    if (a == 2 && b == 5)
        printf("7");
    if (a == 2 && b == 6)
        printf("6");
    if (a == 4 && b == 1)
        printf("5");
    if (a == 4 && b == 2)
        printf("6");
    if (a == 4 && b == 4)
        printf("4");
    if (a == 4 && b == 3)
        printf("7");
    if (a == 4 && b == 5)
        printf("5");
    if (a == 4 && b == 6)
        printf("6");
    if (a == 3 && b == 1)
        printf("3");
    if (a == 3 && b == 2)
        printf("3");
    if (a == 3 && b == 4)
        printf("7");
    if (a == 3 && b == 3)
        printf("3");
    if (a == 3 && b == 5)
        printf("7");
    if (a == 3 && b == 6)
        printf("7");
    if (a == 5 && b == 1)
        printf("5");
    if (a == 5 && b == 2)
        printf("7");
    if (a == 5 && b == 4)
        printf("5");
    if (a == 5 && b == 3)
        printf("7");
    if (a == 5 && b == 5)
        printf("5");
    if (a == 5 && b == 6)
        printf("7");
    if (a == 6 && b == 1)
        printf("7");
    if (a == 6 && b == 2)
        printf("6");
    if (a == 6 && b == 4)
        printf("6");
    if (a == 6 && b == 3)
        printf("7");
    if (a == 6 && b == 5)
        printf("7");
    if (a == 6 && b == 6)
        printf("6");
    if (a == 0 && b == 0) printf("0");
    if (a==0 && b != 0)   printf("%d", b);
    if (b == 0 && a != 0) printf("%d", a);
    return 0;
}
