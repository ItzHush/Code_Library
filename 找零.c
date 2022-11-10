#include <stdio.h>
int main(void)
{
	int price = 0, prize = 0;
	printf_s("应收现金（元）\n");
	scanf_s(" %d", &price);
	printf_s("实收现金（元） \n");
	scanf_s(" %d", &prize);
    int amount = prize - price;
    amount /= 10;
    switch (amount) {
        case 1:
            printf("poor\n");
            break;
        case 2:
            printf("so so\n");
            break;
        default:
            printf("rich\n");
            break;

    }
    return 0;
}
