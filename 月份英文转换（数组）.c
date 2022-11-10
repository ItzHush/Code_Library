#include <stdio.h>

int main(void)
{
    int i;
    char a[][12] = {"Januray", "Febrery", "Wendnesday", "April", "May", "June", "July", "Augest", "September", "October", "November", "Decenber"};
    scanf_s("%d", &i);
    if (i > 12)
        printf("¹ö");
    else
        printf("%s", a[i - 1]);
    return 0;
}