#include <stdio.h>

int main() {
    int one, two, five;
    int price;

    printf("�����\n");
    scanf_s("%d", &price);
    for ( one = 1; one < price * 10; one++ ){
        for ( two = 1; two < price * 5; two++ ){
            for ( five = 1; five < price * 2; five ++) {
                if ( one + two * 2 + five * 5 == price * 10 ) {
                    printf("%döһ�Ǻ�%d����Ǯ��%dö���Ǯ�ܴճ�%dԪ\n", one, two, five, price);
                    goto bye;

                }
            }
        }
    }
    bye:
    return 0;
}
